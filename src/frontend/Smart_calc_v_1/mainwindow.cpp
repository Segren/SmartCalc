#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->pushButton_signChange, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_back, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_plus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_minus, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_multiply, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_divide, SIGNAL(clicked()), this, SLOT(operations()));
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    QString new_label = (ui->result_show->text() + button->text());
    QString new_label_no_spaces = new_label.remove(' ');

    static QRegularExpression regex("[^0-9\\.]");
    QStringList numbers = new_label_no_spaces.split(regex, Qt::SkipEmptyParts);
    QString last_number = numbers.isEmpty() ? QString() : numbers.last();

    QString last_number_no_dot = last_number;
    int digitCount = last_number_no_dot.remove('.').length();
    bool isLengthValid = digitCount<=15;
    bool isDecimalValid = true;

    if(last_number.contains('.'))
    {
        int decimalIndex = last_number.indexOf('.');
        QString decimalPart = last_number.mid(decimalIndex + 1);
        int decimalLength = decimalPart.length();
        isDecimalValid = decimalLength <= 10;
    }

    if(isLengthValid && isDecimalValid)
    {
        new_label = formatExpressionWithSpaces(new_label);
        ui->result_show->setText(new_label);
    }
}

QString MainWindow::formatExpressionWithSpaces(const QString &expression)
{
    //разделяет на числа и нечисловые части
    QString result;
    QString numberPart;
    bool inNumber = false;

    for(const QChar &ch : expression)
    {
        if(ch.isDigit() || ch == '.')
        {
            numberPart.append(ch);
            inNumber = true;
        }
        else
        {
            if(inNumber)
            {
                result += formatNumberWithSpaces(numberPart);
                numberPart.clear();
                inNumber = false;
            }
            result += ch;
        }
    }
    if(inNumber)
    {
        result += formatNumberWithSpaces(numberPart);
    }
    return result;
}

QString MainWindow::formatNumberWithSpaces(const QString &number)
{
    QString result;
    int digitCount = 0;
    int dotIndex = number.indexOf('.');
    int start = (dotIndex != -1) ? dotIndex -1 : number.length()-1;

    for(int i = start; i >= 0; i--)
    {
        result.prepend(number[i]);
        if(number[i].isDigit())
        {
            digitCount++;
            if(digitCount % 3 == 0 && i != 0)
                result.prepend(' ');
        }
    }
    if (dotIndex!= -1)
    {
        result += number.mid(dotIndex);
    }

    return result;
}

void MainWindow::on_pushButton_dot_clicked()
{
    QString current_text = ui->result_show->text();
    QString current_text_no_spaces = current_text.remove(' ');
    //проверяем что строка не пуста и не заканчивается точкой
    if(!current_text_no_spaces.isEmpty() && current_text_no_spaces.right(1).at(0).isDigit())
    {
        //находим последнее число в строке
        static QRegularExpression regex("[^0-9\\.]");
        QStringList numbers = current_text_no_spaces.split(regex, Qt::SkipEmptyParts);
        QString last_number = numbers.isEmpty() ? QString() : numbers.last();

        if(!last_number.contains('.') && last_number.length()<15)
            ui->result_show->setText(ui->result_show->text() + ".");
    }
}

void MainWindow::operations()
{
    QString current_text = ui->result_show->text();
    QString current_text_no_spaces = current_text.remove(" ");
    QPushButton *button = (QPushButton *)sender();

    double all_numbers;
    QString new_label;

    if(button->text() == "+/-")
    {
        static QRegularExpression regex("(\\-?\\(\\-?\\d+\\.?\\d*)$|(-?\\d+\\.?\\d*)$");
        QRegularExpressionMatch match = regex.match(current_text_no_spaces);
        if(match.hasMatch())
        {
            //qDebug() << match;
            QString lastNum = match.captured(0);
            if(lastNum.startsWith("(-"))
            {
                lastNum.remove(0,2);
            }
            else
            {
                lastNum.prepend("(-");
            }
            current_text_no_spaces.replace(match.capturedStart(0),match.capturedLength(0),lastNum);
            current_text = formatExpressionWithSpaces(current_text_no_spaces);
            ui->result_show->setText(current_text);
        } else if(current_text_no_spaces.endsWith("(-"))
        {
            current_text_no_spaces.chop(2);
            current_text = formatExpressionWithSpaces(current_text_no_spaces);
            ui->result_show->setText(current_text);
        } else
        {
            current_text = formatExpressionWithSpaces(current_text_no_spaces);
            ui->result_show->setText(current_text + "(-");
        }
    } else if(button->text() == "<<")
    {
        current_text_no_spaces.chop(1);
        current_text = formatExpressionWithSpaces(current_text_no_spaces);
        ui->result_show->setText(current_text);
    } else if(button->text() == "+")
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')')))
        {
            new_label = (current_text_no_spaces + button->text());
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    }
}

void MainWindow::on_pushButton_AC_clicked()
{
    ui->result_show->setText("");
}


void MainWindow::on_pushButton_equal_clicked()
{
    QString qtInfix = ui->result_show->text();
    QByteArray byteArray = qtInfix.toUtf8();
    char* infix = byteArray.data();
    char *postfix = tokenize(infix);
    double x = NULL;
    double result;
    calculatePostfix(postfix, &result, x);
    free(postfix);

    QString resultString = QString::number(result);
    resultString = formatExpressionWithSpaces(resultString);
    ui->result_show->setText(resultString);
}

