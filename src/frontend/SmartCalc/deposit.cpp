#include "deposit.h"
#include "ui_deposit.h"

Deposit::Deposit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Deposit)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(this->width(), this->height());
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

}

