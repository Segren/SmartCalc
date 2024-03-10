/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result_show;
    QLabel *background_grey;
    QPushButton *pushButton_tan;
    QPushButton *pushButton_acos;
    QPushButton *pushButton_atan;
    QPushButton *pushButton_cos;
    QPushButton *pushButton_sqrt;
    QPushButton *pushButton_asin;
    QPushButton *pushButton_percent;
    QPushButton *pushButton_mod;
    QPushButton *pushButton_log;
    QPushButton *pushButton_ln;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_expo;
    QPushButton *pushButton_X;
    QLabel *result_show_2;
    QPushButton *pushButton_back;
    QLabel *label_equal;
    QPushButton *pushButton_signChange;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_0;
    QPushButton *pushButton_AC;
    QPushButton *pushButton_brackets;
    QPushButton *pushButton_2;
    QPushButton *pushButton_00;
    QPushButton *pushButton_4;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_graph;
    QPushButton *pushButton_deposit;
    QPushButton *pushButton_9;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_1;
    QPushButton *pushButton_equal;
    QPushButton *pushButton_credit;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_8;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(241, 481);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result_show = new QLabel(centralwidget);
        result_show->setObjectName("result_show");
        result_show->setGeometry(QRect(0, 0, 252, 69));
        QFont font;
        font.setFamilies({QString::fromUtf8("Osaka")});
        font.setPointSize(20);
        result_show->setFont(font);
        result_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #6b6b6b; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-size: 20pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 6px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        result_show->setWordWrap(true);
        background_grey = new QLabel(centralwidget);
        background_grey->setObjectName("background_grey");
        background_grey->setGeometry(QRect(-11, -6, 681, 161));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Digital-7")});
        font1.setPointSize(30);
        background_grey->setFont(font1);
        background_grey->setAutoFillBackground(false);
        background_grey->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-family: 'Digital-7', Monospace; /* \320\250\321\200\320\270\321\204\321\202\321\213 */\n"
"    font-size: 30pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 8px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 3px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        background_grey->setWordWrap(true);
        pushButton_tan = new QPushButton(centralwidget);
        pushButton_tan->setObjectName("pushButton_tan");
        pushButton_tan->setGeometry(QRect(125, 74, 51, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Osaka")});
        font2.setItalic(false);
        pushButton_tan->setFont(font2);
        pushButton_tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_acos = new QPushButton(centralwidget);
        pushButton_acos->setObjectName("pushButton_acos");
        pushButton_acos->setGeometry(QRect(62, 100, 51, 21));
        pushButton_acos->setFont(font2);
        pushButton_acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_atan = new QPushButton(centralwidget);
        pushButton_atan->setObjectName("pushButton_atan");
        pushButton_atan->setGeometry(QRect(125, 100, 51, 21));
        pushButton_atan->setFont(font2);
        pushButton_atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName("pushButton_cos");
        pushButton_cos->setGeometry(QRect(62, 74, 51, 21));
        pushButton_cos->setFont(font2);
        pushButton_cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_sqrt = new QPushButton(centralwidget);
        pushButton_sqrt->setObjectName("pushButton_sqrt");
        pushButton_sqrt->setGeometry(QRect(62, 126, 51, 21));
        pushButton_sqrt->setFont(font2);
        pushButton_sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_asin = new QPushButton(centralwidget);
        pushButton_asin->setObjectName("pushButton_asin");
        pushButton_asin->setGeometry(QRect(0, 100, 51, 21));
        pushButton_asin->setFont(font2);
        pushButton_asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_percent = new QPushButton(centralwidget);
        pushButton_percent->setObjectName("pushButton_percent");
        pushButton_percent->setGeometry(QRect(125, 126, 51, 21));
        pushButton_percent->setFont(font2);
        pushButton_percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_mod = new QPushButton(centralwidget);
        pushButton_mod->setObjectName("pushButton_mod");
        pushButton_mod->setGeometry(QRect(190, 126, 51, 21));
        pushButton_mod->setFont(font2);
        pushButton_mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_log = new QPushButton(centralwidget);
        pushButton_log->setObjectName("pushButton_log");
        pushButton_log->setGeometry(QRect(190, 74, 51, 21));
        pushButton_log->setFont(font2);
        pushButton_log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_ln = new QPushButton(centralwidget);
        pushButton_ln->setObjectName("pushButton_ln");
        pushButton_ln->setGeometry(QRect(190, 100, 51, 21));
        pushButton_ln->setFont(font2);
        pushButton_ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName("pushButton_sin");
        pushButton_sin->setGeometry(QRect(0, 74, 51, 21));
        pushButton_sin->setFont(font2);
        pushButton_sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_expo = new QPushButton(centralwidget);
        pushButton_expo->setObjectName("pushButton_expo");
        pushButton_expo->setGeometry(QRect(0, 126, 51, 21));
        pushButton_expo->setFont(font2);
        pushButton_expo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #406592; \n"
"    color: white; /* \320\221\320\265\320\273\321\213\320\271 \321\202\320\265\320\272\321\201\321\202 */\n"
"    border-radius: 6px; /* \320\241\320\273\320\265\320\263\320\272\320\260 \321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
"    font-size: 16px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    border: 1px solid #404040; /* \320\242\320\276\320\275\320\272\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    text-align: center; /* \320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320\260\320\275\320\270\320\265 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #72aad6; /* \320\235\320\265\320\274\320\275\320\276\320\263\320\276 \321\201\320\262\320\265\321\202\320\273\320\265\320\265 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #707070; /* \320\247\321\203\321\202\321\214 \321\202\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border: 1px solid #303030; /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"}\n"
""));
        pushButton_X = new QPushButton(centralwidget);
        pushButton_X->setObjectName("pushButton_X");
        pushButton_X->setGeometry(QRect(2, 155, 36, 30));
        pushButton_X->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 */\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #f6f7fa, stop:1 #dadbde);\n"
"    min-width: 20px;\n"
"    min-height: 10px;\n"
"\n"
"    /* \320\242\320\265\320\272\321\201\321\202 \320\270 \321\210\321\200\320\270\321\204\321\202 */\n"
"    color: #333;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"    border: 2px solid #FF7832;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0"
                        " #dadbde, stop:1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:pressed, QPushButton:checked {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FF7832, stop:1 #FF9739);\n"
"    color: white;\n"
"}\n"
""));
        pushButton_X->setCheckable(true);
        result_show_2 = new QLabel(centralwidget);
        result_show_2->setObjectName("result_show_2");
        result_show_2->setGeometry(QRect(51, 155, 161, 30));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Osaka")});
        font3.setPointSize(15);
        result_show_2->setFont(font3);
        result_show_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"	border-radius: 3px; \n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 3px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        result_show_2->setWordWrap(true);
        pushButton_back = new QPushButton(centralwidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setGeometry(QRect(212, 155, 31, 30));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font4.setBold(true);
        font4.setItalic(false);
        pushButton_back->setFont(font4);
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 */\n"
"\n"
"    background-color:  qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #f6f7fa, stop:1 #dadbde);\n"
"    min-width: 10px;\n"
"    min-height: 5px;\n"
"    border-radius: 6px;\n"
"\n"
"    /* \320\242\320\265\320\272\321\201\321\202 \320\270 \321\210\321\200\320\270\321\204\321\202 */\n"
"    color: #333;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #dadbde, stop:1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
""
                        "    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #30333c, stop:1 #6794CA);\n"
"    color: white;\n"
"}\n"
""));
        label_equal = new QLabel(centralwidget);
        label_equal->setObjectName("label_equal");
        label_equal->setGeometry(QRect(40, 160, 16, 16));
        pushButton_signChange = new QPushButton(centralwidget);
        pushButton_signChange->setObjectName("pushButton_signChange");
        pushButton_signChange->setGeometry(QRect(60, 185, 61, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        pushButton_signChange->setFont(font5);
        pushButton_signChange->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0,  y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(60, 285, 61, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(120, 335, 61, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName("pushButton_0");
        pushButton_0->setGeometry(QRect(60, 385, 61, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font6.setPointSize(15);
        pushButton_0->setFont(font6);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_AC = new QPushButton(centralwidget);
        pushButton_AC->setObjectName("pushButton_AC");
        pushButton_AC->setGeometry(QRect(0, 185, 61, 51));
        pushButton_AC->setFont(font5);
        pushButton_AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0,  y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_brackets = new QPushButton(centralwidget);
        pushButton_brackets->setObjectName("pushButton_brackets");
        pushButton_brackets->setGeometry(QRect(120, 185, 61, 51));
        pushButton_brackets->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0,  y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(60, 335, 61, 51));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_00 = new QPushButton(centralwidget);
        pushButton_00->setObjectName("pushButton_00");
        pushButton_00->setGeometry(QRect(0, 385, 61, 51));
        pushButton_00->setFont(font6);
        pushButton_00->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 285, 61, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_dot = new QPushButton(centralwidget);
        pushButton_dot->setObjectName("pushButton_dot");
        pushButton_dot->setGeometry(QRect(120, 385, 61, 51));
        pushButton_dot->setFont(font5);
        pushButton_dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(215, 215, 215);\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0,  y2: 1, stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        pushButton_graph = new QPushButton(centralwidget);
        pushButton_graph->setObjectName("pushButton_graph");
        pushButton_graph->setGeometry(QRect(10, 443, 71, 31));
        pushButton_graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 */\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #f6f7fa, stop:1 #dadbde);\n"
"    min-width: 40px;\n"
"    min-height: 10px;\n"
"\n"
"    /* \320\242\320\265\320\272\321\201\321\202 \320\270 \321\210\321\200\320\270\321\204\321\202 */\n"
"    color: #333;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"    border: 2px solid #FF7832;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0"
                        " #dadbde, stop:1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FF7832, stop:1 #FF9739);\n"
"    color: white;\n"
"}\n"
""));
        pushButton_deposit = new QPushButton(centralwidget);
        pushButton_deposit->setObjectName("pushButton_deposit");
        pushButton_deposit->setGeometry(QRect(85, 443, 71, 31));
        pushButton_deposit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 */\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #f6f7fa, stop:1 #dadbde);\n"
"    min-width: 40px;\n"
"    min-height: 10px;\n"
"\n"
"    /* \320\242\320\265\320\272\321\201\321\202 \320\270 \321\210\321\200\320\270\321\204\321\202 */\n"
"    color: #333;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"    border: 2px solid #FF7832;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0"
                        " #dadbde, stop:1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FF7832, stop:1 #FF9739);\n"
"    color: white;\n"
"}\n"
""));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(120, 235, 61, 51));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_plus = new QPushButton(centralwidget);
        pushButton_plus->setObjectName("pushButton_plus");
        pushButton_plus->setGeometry(QRect(180, 335, 61, 51));
        pushButton_plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName("pushButton_1");
        pushButton_1->setGeometry(QRect(0, 335, 61, 51));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_equal = new QPushButton(centralwidget);
        pushButton_equal->setObjectName("pushButton_equal");
        pushButton_equal->setGeometry(QRect(180, 385, 61, 51));
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_credit = new QPushButton(centralwidget);
        pushButton_credit->setObjectName("pushButton_credit");
        pushButton_credit->setGeometry(QRect(160, 443, 71, 31));
        pushButton_credit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 */\n"
"    border: 2px solid #8f8f91;\n"
"    border-radius: 6px;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #f6f7fa, stop:1 #dadbde);\n"
"    min-width: 40px;\n"
"    min-height: 10px;\n"
"\n"
"    /* \320\242\320\265\320\272\321\201\321\202 \320\270 \321\210\321\200\320\270\321\204\321\202 */\n"
"    color: #333;\n"
"    font: bold 14px;\n"
"    padding: 6px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
"    border: 2px solid #FF7832;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0"
                        " #dadbde, stop:1 #FF9739);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    /* \320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 #FF7832, stop:1 #FF9739);\n"
"    color: white;\n"
"}\n"
""));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(0, 235, 61, 51));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(120, 285, 61, 51));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(180, 185, 61, 51));
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(180, 235, 61, 51));
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_minus = new QPushButton(centralwidget);
        pushButton_minus->setObjectName("pushButton_minus");
        pushButton_minus->setGeometry(QRect(180, 285, 61, 51));
        pushButton_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(255, 151, 57);\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(60, 235, 61, 51));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"	background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        background_grey->raise();
        result_show->raise();
        pushButton_tan->raise();
        pushButton_acos->raise();
        pushButton_atan->raise();
        pushButton_cos->raise();
        pushButton_sqrt->raise();
        pushButton_asin->raise();
        pushButton_percent->raise();
        pushButton_mod->raise();
        pushButton_log->raise();
        pushButton_ln->raise();
        pushButton_sin->raise();
        pushButton_expo->raise();
        pushButton_X->raise();
        result_show_2->raise();
        pushButton_back->raise();
        label_equal->raise();
        pushButton_signChange->raise();
        pushButton_5->raise();
        pushButton_3->raise();
        pushButton_0->raise();
        pushButton_AC->raise();
        pushButton_brackets->raise();
        pushButton_2->raise();
        pushButton_00->raise();
        pushButton_4->raise();
        pushButton_dot->raise();
        pushButton_graph->raise();
        pushButton_deposit->raise();
        pushButton_9->raise();
        pushButton_plus->raise();
        pushButton_1->raise();
        pushButton_equal->raise();
        pushButton_credit->raise();
        pushButton_7->raise();
        pushButton_6->raise();
        pushButton_divide->raise();
        pushButton_multiply->raise();
        pushButton_minus->raise();
        pushButton_8->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        result_show->setText(QString());
        background_grey->setText(QString());
        pushButton_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        pushButton_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        pushButton_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        pushButton_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        pushButton_percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        pushButton_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        pushButton_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_expo->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        pushButton_X->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        result_show_2->setText(QString());
        pushButton_back->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));
        label_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_signChange->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_AC->setText(QCoreApplication::translate("MainWindow", "\320\220\320\241", nullptr));
        pushButton_brackets->setText(QCoreApplication::translate("MainWindow", "()", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_00->setText(QCoreApplication::translate("MainWindow", "00", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_graph->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        pushButton_deposit->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_credit->setText(QCoreApplication::translate("MainWindow", "Credit", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
