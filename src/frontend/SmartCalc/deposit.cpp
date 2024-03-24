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
