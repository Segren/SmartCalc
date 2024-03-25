#include "deposit.h"
#include "ui_deposit.h"

Deposit::Deposit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Deposit)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(this->width(), this->height());

    ui->termType->addItem("months");
    ui->termType->addItem("years");
    ui->periodOfPaymentsType->addItem("monthly");
    ui->periodOfPaymentsType->addItem("yearly");
    ui->depositAmount_show->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));
    ui->term_show->setValidator(new QIntValidator(1, 9999, this));
    ui->interestRate_show->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));
    ui->taxRate_show->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));
    ui->monthlyReplenishment_show->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));
    ui->monthlyWithdrawal_show->setValidator(new QDoubleValidator(0.01, 1000000.0, 2, this));
}

Deposit::~Deposit()
{
    delete ui;
}

void Deposit::on_pushButton_clear_clicked()
{
    ui->totalEarned_show->setText("");
    ui->taxAmount_show->setText("");
    ui->totalAmount_show->setText("");
    ui->depositAmount_show->setText("");
    ui->term_show->setText("");
    ui->interestRate_show->setText("");
    ui->taxRate_show->setText("");
    ui->monthlyReplenishment_show->setText("");
    ui->monthlyWithdrawal_show->setText("");
}


void Deposit::on_pushButton_calculate_clicked()
{
    long double PV = ui->depositAmount_show->text().toDouble();                          //первоначальная сумма вклада
    long double r = ui->interestRate_show->text().toDouble() / 100;                      // годовая процентная ставка
    long double taxRate = ui->taxRate_show->text().toDouble() / 100;                     // налоговая ставка на доход от процентов
    long double monthlyReplenishment = ui->monthlyReplenishment_show->text().toDouble(); //Ежемесячное пополнение
    long double monthlyWithdrawal = ui->monthlyWithdrawal_show->text().toDouble();       //Ежемесячное снятие
    long double term = 0.0;                                                              //срок вклада в месяцах
    if(ui->termType->currentText() == "months")
        term = ui->term_show->text().toDouble();
    else if(ui->termType->currentText() == "years")
        term = ui->term_show->text().toDouble() * 12.0;

    long double currentBalance = PV;

    if(!ui->capitalisationButton->isChecked())
    {
        long double FV = PV *(1.0+r*term/12.0);
        long double totalInterest = PV * r * term/12.0;
        long double totalTax = totalInterest * taxRate;

        FV += monthlyReplenishment*term - monthlyWithdrawal*term;

        ui->totalAmount_show->setText(QString::number(FV,'f',2));
        ui->totalEarned_show->setText(QString::number((FV-PV - monthlyReplenishment*term + monthlyWithdrawal*term - totalTax),'f',2));
        ui->taxAmount_show->setText(QString::number(totalTax,'f',2));
    } else {
        long double interestSumm = 0; //сумма налога (*)
        long double monthlyRate = r/12;
        for(int month = 1;month<=term;++month){
            long double balanceBeforeInterest = currentBalance;
            currentBalance *= (1 + monthlyRate);
            long double interestEarned = currentBalance - balanceBeforeInterest;
            long double taxDeduction = interestEarned * taxRate;
            interestSumm += taxDeduction;

            currentBalance -= taxDeduction;
            currentBalance += monthlyReplenishment - monthlyWithdrawal;
        }

        ui->totalAmount_show->setText(QString::number(currentBalance,'f',2));
        ui->totalEarned_show->setText(QString::number((currentBalance - PV - monthlyReplenishment*term + monthlyWithdrawal*term),'f',2));
        ui->taxAmount_show->setText(QString::number(interestSumm,'f',2));
    }
}

