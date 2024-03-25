#include "credit.h"
#include "ui_credit.h"

Credit::Credit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Credit)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(this->width(), this->height());

    ui->paymentType->addItem("Annuity");
    ui->paymentType->addItem("Differential");
    ui->creditAmount->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));
    ui->creditTerm->setValidator(new QIntValidator(1, 9999, this));
    ui->interestRate->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));

    connect(ui->paymentType, &QComboBox::currentTextChanged, this, &Credit::paymentType_newText);

}

Credit::~Credit()
{
    delete ui;
}
void Credit::on_pushButton_clear_clicked()
{
    ui->creditAmount->setText("");
    ui->creditTerm->setText("");
    ui->interestRate->setText("");
    ui->monthlyPayments_show->setText("");
    ui->monthlyPayment1->setText("");
    ui->monthlyPayment2->setText("");
    ui->overpay_show->setText("");
    ui->totalPayment_show->setText("");
}


void Credit::on_pushButton_calculate_clicked()
{
    QString paymentType = ui->paymentType->currentText();

    double P = ui->creditAmount->text().toDouble();          // Основная сумма кредита
    double annualRate = ui->interestRate->text().toDouble(); // Годовая процентная ставка
    int n = ui->creditTerm->text().toInt();                  // Срок кредита в месяцах
    double r = annualRate/12/100;                            // Месячная процентная ставка
    if(paymentType == "Annuity")
    {
        double M = P * (r * pow(1+r,n) / (pow(1+r,n) - 1)); // Ежемесячный платеж

        double totalPayment = M * n;             // Общая сумма выплат
        double totalInterest = totalPayment - P; // Начисленные проценты

        ui->monthlyPayment1->setText("");
        ui->monthlyPayment2->setText("");
        ui->monthlyPayments_show->setText(QString::number(M,'f', 2));
        ui->overpay_show->setText(QString::number(totalInterest,'f', 2));
        ui->totalPayment_show->setText(QString::number(totalPayment,'f', 2));
    } else {
        double principalPayment = P/n;                          // Платеж по основному долгу (долг ежемесячный)
        double remainingDebt = P;                               // Остаток долга
        double totalInterest = 0;                               // Общая сумма процентов (*)
        double maxPayment = 0;                                  // Максимальный платеж (*)
        double minPayment = std::numeric_limits<double>::max(); //Минимальный платеж (*)

        for(int month = 1;month<=n;++month){
            double interestPayment = remainingDebt * r;
            double monthlyPayment = interestPayment + principalPayment;

            totalInterest += interestPayment;
            maxPayment = std::max(maxPayment, monthlyPayment);
            minPayment = std::min(minPayment, monthlyPayment);

            remainingDebt -= principalPayment;
        }

        double totalPayment = P + totalInterest;  //Общая сумма выплат (*)

        ui->monthlyPayments_show->setText("");
        ui->monthlyPayment1->setText(QString::number(maxPayment,'f', 2));
        ui->monthlyPayment2->setText(QString::number(minPayment,'f', 2));
        ui->overpay_show->setText(QString::number(totalInterest,'f', 2));
        ui->totalPayment_show->setText(QString::number(totalPayment,'f', 2));
    }
}


void Credit::paymentType_newText(const QString &arg1)
{
    if (arg1 == "Annuity") {
        ui->monthlyPayments_show->setStyleSheet("QLabel {qproperty-alignment: 'AlignVCenter | AlignRight'; color: black; background-color: white; border-radius: 3px;font-size: 15pt;padding: 3px;border: 1px solid #333;}");
        ui->monthlyPayment1->setStyleSheet("QLabel {qproperty-alignment: 'AlignVCenter | AlignRight'; color: black; background-color: rgb(215, 215, 215); border-radius: 3px;font-size: 15pt;padding: 3px;border: 1px solid #333;}");
        ui->monthlyPayment2->setStyleSheet("QLabel {qproperty-alignment: 'AlignVCenter | AlignRight'; color: black; background-color: rgb(215, 215, 215); border-radius: 3px;font-size: 15pt;padding: 3px;border: 1px solid #333;}");
    } else if (arg1 == "Differential") {
        ui->monthlyPayments_show->setStyleSheet("QLabel {qproperty-alignment: 'AlignVCenter | AlignRight'; color: black; background-color: rgb(215, 215, 215); border-radius: 3px;font-size: 15pt;padding: 3px;border: 1px solid #333;}");
        ui->monthlyPayment1->setStyleSheet("QLabel {qproperty-alignment: 'AlignVCenter | AlignRight'; color: black; background-color: white; border-radius: 3px;font-size: 15pt;padding: 3px;border: 1px solid #333;}");
        ui->monthlyPayment2->setStyleSheet("QLabel {qproperty-alignment: 'AlignVCenter | AlignRight'; color: black; background-color: white; border-radius: 3px;font-size: 15pt;padding: 3px;border: 1px solid #333;}");
    }
}

