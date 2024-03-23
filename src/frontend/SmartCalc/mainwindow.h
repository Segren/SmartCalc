#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpression>
#include <QString>
#include <QMessageBox>
#include <QFontDatabase>
#include <graph.h>
#include <QVector>
#include <QTimer>

#include "graph.h"

extern "C"
{
#include "../../backend/s21_smart_calc.h"
#include "../../backend/ipn_converter.h"
#include "../../backend/stack.h"
}

QT_BEGIN_NAMESPACE
namespace Ui
{
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
    bool brackets_char_checker(QChar x);
    bool func_char_checker(QChar x);
    double xValue = 0.0;
    bool isXInputActive = false;
    double xBegin, xEnd, step;
    int dotNum;
    QVector<double> x,y;
    Graph *graphWindow = nullptr;

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void digits_numbers();
    void on_pushButton_dot_clicked();
    void operations();
    void on_pushButton_AC_clicked();
    void on_pushButton_equal_clicked();
    void on_pushButton_brackets_clicked();
    void on_pushButton_percent_clicked();
    void on_pushButton_X_clicked();


signals:
    void signal(QString);

public slots:
    void createGraph();
};
#endif // MAINWINDOW_H
