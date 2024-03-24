#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //на случай добавления кастомного шрифта(может вызвать ошибки при обновлении Xcode)
    // int fontId = QFontDatabase::addApplicationFont(":/new/fonts/digital-7.ttf");
    // QString fontFamily = QFontDatabase::applicationFontFamilies(fontId).at(0);
    // QFont font(fontFamily);
    // ui->result_show->setFont(font);

    // Задать фиксированный размер для главного окна
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());



    connect(ui->pushButton_00, SIGNAL(clicked()), this, SLOT(digits_numbers()));
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
    connect(ui->pushButton_AC, &QPushButton::clicked, this, &MainWindow::on_pushButton_AC_clicked);
    connect(ui->pushButton_dot, &QPushButton::clicked, this, &MainWindow::on_pushButton_dot_clicked);
    connect(ui->pushButton_equal, &QPushButton::clicked, this, &MainWindow::on_pushButton_equal_clicked);
    connect(ui->pushButton_brackets, &QPushButton::clicked, this, &MainWindow::on_pushButton_brackets_clicked);
    connect(ui->pushButton_percent, &QPushButton::clicked, this, &MainWindow::on_pushButton_percent_clicked);
    connect(ui->pushButton_sin, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_cos, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_tan, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_asin, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_acos, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_atan, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_sqrt, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_log, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_ln, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_expo, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->pushButton_mod, SIGNAL(clicked()), this, SLOT(operations()));

    connect(ui->pushButton_X, &QPushButton::clicked, this, &MainWindow::on_pushButton_X_clicked);

    connect(ui->pushButton_graph, SIGNAL(clicked()), this, SLOT(createGraph()));
    connect(ui->pushButton_credit, SIGNAL(clicked()), this, SLOT(createCredit()));
    connect(ui->pushButton_deposit, SIGNAL(clicked()), this, SLOT(createDeposit()));


}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();

    if(!isXInputActive)
    {
        if(ui->result_show->text().isEmpty() || (!ui->result_show->text().isEmpty() && ui->result_show->text().right(1).at(0) != QChar(')') && ui->result_show->text().right(1).at(0) != QChar('X')))
        {
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
    } else
    {
        if(ui->result_show_2->text().isEmpty() || (!ui->result_show_2->text().isEmpty() && ui->result_show_2->text().right(1).at(0) != QChar(')') && ui->result_show_2->text().right(1).at(0) != QChar('X')))
        {
            QString new_label = (ui->result_show_2->text() + button->text());
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
                ui->result_show_2->setText(new_label);
            }
        }
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
    QString xCurrent_text = ui->result_show_2->text();
    QString xCurrent_text_no_spaces = xCurrent_text.remove(' ');

    if(!isXInputActive)
    {
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
    } else
    {
        //проверяем что строка не пуста и не заканчивается точкой
        if(!xCurrent_text_no_spaces.isEmpty() && xCurrent_text_no_spaces.right(1).at(0).isDigit())
        {
            //находим последнее число в строке
            static QRegularExpression regex("[^0-9\\.]");
            QStringList numbers = xCurrent_text_no_spaces.split(regex, Qt::SkipEmptyParts);
            QString last_number = numbers.isEmpty() ? QString() : numbers.last();

            if(!last_number.contains('.') && last_number.length()<15)
                ui->result_show_2->setText(ui->result_show_2->text() + ".");
        }
    }
}

void MainWindow::operations()
{
    QString current_text = ui->result_show->text();
    QString current_text_no_spaces = current_text.remove(" ");
    QString xCurrent_text = ui->result_show_2->text();
    QString xCurrent_text_no_spaces = xCurrent_text.remove(" ");
    QPushButton *button = (QPushButton *)sender();

    QString new_label;

    if(button->text() == "+/-" && current_text_no_spaces.right(1).at(0) != QChar(')'))
    {
        static QRegularExpression regex("(\\-?\\(\\-?\\d+\\.?\\d*)$|(-?\\d+\\.?\\d*)$");
        QRegularExpressionMatch match = regex.match(current_text_no_spaces);
        if(match.hasMatch())
        {
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
        if(!isXInputActive)
        {
            static QRegularExpression regex("(\\w+\\(|\\d+\\.?\\d*|\\w+)$");
            QRegularExpressionMatch match = regex.match(current_text_no_spaces);
            if(match.hasMatch())
            {
                QString lastToken = match.captured(0);
                if(lastToken .endsWith("("))
                {
                    current_text_no_spaces.chop(lastToken.length());
                } else
                {
                    current_text_no_spaces.chop(1);
                }
            } else if(!current_text_no_spaces.isEmpty())
            {
                current_text_no_spaces.chop(1);
            }
            current_text = formatExpressionWithSpaces(current_text_no_spaces);
            ui->result_show->setText(current_text);
        } else
        {
            static QRegularExpression regex("(\\w+\\(|\\d+\\.?\\d*|\\w+)$");
            QRegularExpressionMatch match = regex.match(xCurrent_text_no_spaces);
            if(match.hasMatch())
            {
                QString lastToken = match.captured(0);
                if(lastToken .endsWith("("))
                {
                    xCurrent_text_no_spaces.chop(lastToken.length());
                } else
                {
                    xCurrent_text_no_spaces.chop(1);
                }
            } else if(!xCurrent_text_no_spaces.isEmpty())
            {
                xCurrent_text_no_spaces.chop(1);
            }
            xCurrent_text = formatExpressionWithSpaces(xCurrent_text_no_spaces);
            ui->result_show_2->setText(xCurrent_text);
        }
    } else if(button->text() == "+" && !isXInputActive)
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')') || current_text_no_spaces.right(1).at(0) == QChar('X')))
        {
            new_label = (current_text_no_spaces + button->text());
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "-" && !isXInputActive)
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')') || current_text_no_spaces.right(1).at(0) == QChar('(') || current_text_no_spaces.right(1).at(0) == QChar('X')))
        {
            new_label = (current_text_no_spaces + button->text());
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "*" && !isXInputActive)
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')') || current_text_no_spaces.right(1).at(0) == QChar('X')))
        {
            new_label = (current_text_no_spaces + "*");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "/" && !isXInputActive)
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')') || current_text_no_spaces.right(1).at(0) == QChar('X')))
        {
            new_label = (current_text_no_spaces + "/");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "sin" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "sin(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "cos" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "cos(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "tan" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "tan(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "asin" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "asin(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "acos" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "acos(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "atan" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "atan(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "sqrt" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "sqrt(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "log" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "log(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "ln" && !isXInputActive)
    {
        if((!current_text_no_spaces.isEmpty() && (func_char_checker(current_text_no_spaces.right(1).at(0)))) || current_text_no_spaces.isEmpty())
        {
            new_label = (current_text_no_spaces + "ln(");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "^" && !isXInputActive)
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')') || current_text_no_spaces.right(1).at(0) == QChar('X')))
        {
            new_label = (current_text_no_spaces + "^");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    } else if(button->text() == "mod" && !isXInputActive)
    {
        if(!current_text_no_spaces.isEmpty() && (current_text_no_spaces.right(1).at(0).isDigit() || current_text_no_spaces.right(1).at(0) == QChar(')') || current_text_no_spaces.right(1).at(0) == QChar('X')))
        {
            new_label = (current_text_no_spaces + "%");
            new_label = formatExpressionWithSpaces(new_label);
            ui->result_show->setText(new_label);
        }
    }
}

void MainWindow::on_pushButton_AC_clicked()
{
    if(!isXInputActive)
        ui->result_show->setText("");
    else
        ui->result_show_2->setText("");
}


void MainWindow::on_pushButton_equal_clicked()
{
    QString qtInfix = ui->result_show->text().remove(' ');

    if(!isXInputActive && !qtInfix.isEmpty() && (qtInfix.right(1).at(0) == QChar(')') || qtInfix.right(1).at(0).isDigit() || qtInfix.right(1).at(0) == QChar('X')))
    {
        QByteArray byteArray = qtInfix.toUtf8();
        char* infix = byteArray.data();
        if(hasBalancedParenthesis(infix)==0)
        {
            char *postfix = tokenize(infix);
            double x = 0;
            if(xValue)
            {
                x = xValue;
                ui->result_show_2->setText("");
            }
            double result;
            bool noDivByZero = calculatePostfix(postfix, &result, x);
            free(postfix);

            if(noDivByZero)
            {
                if (std::abs(result - qRound(result)) < 0.0000000001) {
                    result = qRound(result);
                }

                //устраняем проблемы с лишними нулями при округлении
                QString resultString = QString::number(result, 'f',10);
                resultString = formatExpressionWithSpaces(resultString);

                //убираем лишние нули и точку если она последняя
                static QRegularExpression regexZero("0+$");
                static QRegularExpression regexDot("\\.$");
                resultString.remove(regexZero);
                resultString.remove(regexDot);

                ui->result_show->setText(resultString);
            } else
            {
                QMessageBox msgBox;
                QString imagePath = QCoreApplication::applicationDirPath() + "/../../../../images/divByZero.png";
                QPixmap pixmap(imagePath);

                msgBox.setWindowTitle("Error");
                msgBox.setText("Invalid infix!");
                msgBox.setIconPixmap(pixmap);
                msgBox.exec();
            }
        }
    }
}


void MainWindow::on_pushButton_brackets_clicked()
{
    QString qtInfix = ui->result_show->text().remove(' ');
    if(!isXInputActive && (qtInfix.isEmpty() || (!qtInfix.isEmpty() && brackets_char_checker(qtInfix.right(1).at(0)))))
    {
        QByteArray byteArray = qtInfix.toUtf8();
        char* infix = byteArray.data();
        if (hasBalancedParenthesis(infix) == 0 && (qtInfix.isEmpty() || (!qtInfix.isEmpty() && !qtInfix.right(1).at(0).isDigit() && qtInfix.right(1).at(0) != QChar(')'))))
        {
            qtInfix += "(";
            ui->result_show->setText(qtInfix);
        } else if (hasBalancedParenthesis(infix) == 1)
        {
            if(func_char_checker(qtInfix.right(1).at(0)))
            {
                qtInfix += "(";
                ui->result_show->setText(qtInfix);
            }
            else
            {
                qtInfix += ")";
                ui->result_show->setText(qtInfix);
            }
        }
    }
}

bool MainWindow::brackets_char_checker(QChar x)
{
    bool flag = false;
    if(x == QChar(')')) flag = true;
    else if(x.isDigit()) flag = true;
    else if(x == QChar('+')) flag = true;
    else if(x == QChar('-')) flag = true;
    else if(x == QChar('*')) flag = true;
    else if(x == QChar('/')) flag = true;
    else if(x == QChar('^')) flag = true;
    else if(x == QChar('(')) flag = true;
    else if(x == QChar('X')) flag = true;
    return flag;
}

bool MainWindow::func_char_checker(QChar x)
{
    bool flag = false;
    if(x == QChar('+')) flag = true;
    else if(x == QChar('-')) flag = true;
    else if(x == QChar('*')) flag = true;
    else if(x == QChar('/')) flag = true;
    else if(x == QChar('^')) flag = true;
    else if(x == QChar('(')) flag = true;
    return flag;
}


void MainWindow::on_pushButton_percent_clicked()
{
    if(!isXInputActive)
    {
        QString current_text = ui->result_show->text();
        QString current_text_no_spaces = current_text.remove(" ");

        static QRegularExpression regex("(-?\\d+(\\.\\d+)?)$");
        QRegularExpressionMatch match = regex.match(current_text_no_spaces);
        if (match.hasMatch())
        {
            QString lastNumString = match.captured(0);
            double lastNum = lastNumString.toDouble();
            lastNum *= 0.01;
            QString newNumString = QString::number(lastNum);

            current_text_no_spaces.replace(match.capturedStart(0), match.capturedLength(0), newNumString);
            current_text = formatExpressionWithSpaces(current_text_no_spaces);
            ui->result_show->setText(current_text);
        }
    }
}

void MainWindow::on_pushButton_X_clicked()
{
    QString current_text = ui->result_show->text();
    QString current_text_no_spaces = current_text.remove(' ');

    if(!ui->pushButton_X->isChecked())
    {
        xValue = ui->result_show_2->text().remove(' ').toDouble();
        isXInputActive = !isXInputActive;
    } else
    {
        if (!current_text_no_spaces.contains("X") && (current_text_no_spaces.isEmpty() || (!current_text_no_spaces.isEmpty() && func_char_checker(current_text_no_spaces.right(1).at(0)))))
        {
            current_text_no_spaces += "X";
            ui->result_show->setText(formatExpressionWithSpaces(current_text_no_spaces));
            isXInputActive = !isXInputActive;
        } else
        {
            ui->pushButton_X->setChecked(false);
        }
    }
}


void MainWindow::createGraph() {

    QString infixValue = ui->result_show->text();
    QByteArray byteArray = infixValue.toUtf8();
    char* infix = byteArray.data();

    QRect MainWindowGeometry = this->geometry();
    int newX = MainWindowGeometry.x() + MainWindowGeometry.width();
    int newY;

    infixValue.remove(' ');
    if((hasBalancedParenthesis(infix) == 0) && !isXInputActive && !infixValue.isEmpty() && (infixValue.right(1).at(0) == QChar(')') || infixValue.right(1).at(0).isDigit() || infixValue.right(1).at(0) == QChar('X')))
    {
        if(!graphWindow){
            graphWindow = new Graph(infixValue,nullptr);
            if(!creditWindow.isVisible()){
                newY = MainWindowGeometry.y();
            } else {
                newY = MainWindowGeometry.y() + creditWindow.height();
            }
            graphWindow->move(newX,newY);
        } else {
            graphWindow->updateData(infixValue);

            if(!creditWindow.isVisible()){
                newY = MainWindowGeometry.y();
            } else {
                newY = MainWindowGeometry.y() + creditWindow.height();
            }
            graphWindow->move(newX,newY);
        }

        if(graphWindow->isVisible())
        {
            graphWindow->hide();
        } else
        {
            graphWindow->show();
        }
    }
}

void MainWindow::closeEvent(QCloseEvent *event) {
    if (graphWindow) {
        graphWindow->close();
    }
    if(creditWindow.isVisible()){
        creditWindow.close();
    }
    if(depositWindow.isVisible()){
        depositWindow.close();
    }
    QMainWindow::closeEvent(event);
}

void MainWindow::createCredit() {
    QString infixValue = "1";
    if(!graphWindow){
        graphWindow = new Graph(infixValue,nullptr);
    }
    QRect MainWindowGeometry = this->geometry();
    int newX = MainWindowGeometry.x() + MainWindowGeometry.width();
    int newY;
    if(graphWindow->isHidden()){
        newY = MainWindowGeometry.y();
    } else {
        newY = MainWindowGeometry.y() + graphWindow->height();
    }

    creditWindow.move(newX, newY);

    if(creditWindow.isVisible())
    {
        creditWindow.hide();
    } else
    {
        creditWindow.show();
    }
}

void MainWindow::createDeposit() {
    QRect MainWindowGeometry = this->geometry();
    int newX = MainWindowGeometry.x() - depositWindow.width();
    int newY = MainWindowGeometry.y();

    depositWindow.move(newX, newY);



    if(depositWindow.isVisible())
    {
        depositWindow.hide();
    } else
    {
        depositWindow.show();
    }
}
