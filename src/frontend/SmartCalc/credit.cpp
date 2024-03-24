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
    ui->overpay_show->setText("");
    ui->totalPayment_show->setText("");
}

