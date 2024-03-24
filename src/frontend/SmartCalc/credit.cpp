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
}

Credit::~Credit()
{
    delete ui;
}

// void Credit::on_lineEdit_textChanged(const QString &arg1)
// {

// }

