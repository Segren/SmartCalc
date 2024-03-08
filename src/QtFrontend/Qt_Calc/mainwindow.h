#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QString>
#include <QMessageBox>
#include <QFontDatabase>



extern "C"{
#include "../../backend/s21_smart_calc.h"
#include "../../backend/ipn_converter.h"
#include "../../backend/stack.h"
}

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString formatExpressionWithSpaces(const QString &expression);
    QString formatNumberWithSpaces(const QString &number);

private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void on_pushButton_AC_clicked();
    void on_pushButton_equal_clicked();
};
#endif // MAINWINDOW_H
