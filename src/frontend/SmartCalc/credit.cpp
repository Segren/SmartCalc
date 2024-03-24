#include "credit.h"
#include "ui_credit.h"

Credit::Credit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Credit)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    this->setFixedSize(this->width(), this->height());
}

Credit::~Credit()
{
    delete ui;
}
