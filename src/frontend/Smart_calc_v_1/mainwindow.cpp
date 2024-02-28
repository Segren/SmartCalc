#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->buttonZero, &QPushButton::clicked, this, &MainWindow::buttonZero_clicked);

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buttonZero_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text().append("0"));
}


void MainWindow::lineEdit_textChanged(const QString &arg1)
{

}

