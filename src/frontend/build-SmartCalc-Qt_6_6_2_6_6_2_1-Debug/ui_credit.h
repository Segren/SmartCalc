/********************************************************************************
** Form generated from reading UI file 'credit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDIT_H
#define UI_CREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Credit
{
public:
    QLineEdit *creditAmount;
    QLabel *creditAmountText;
    QLabel *creditTermText;
    QLabel *interestRateText;
    QLabel *paymentTypeText;
    QLineEdit *creditTerm;
    QLineEdit *interestRate;
    QLabel *percentText;
    QComboBox *paymentType;
    QFrame *line;
    QLabel *monthlyPaymentsText;
    QLabel *overpayText;
    QLabel *totalPaymentText;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_calculate;
    QLabel *background_grey;
    QLabel *monthlyPayments_show;
    QLabel *overpay_show;
    QLabel *totalPayment_show;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *monthlyPayment1;
    QLabel *monthlyPayment2;
    QLabel *label;

    void setupUi(QWidget *Credit)
    {
        if (Credit->objectName().isEmpty())
            Credit->setObjectName("Credit");
        Credit->resize(420, 364);
        creditAmount = new QLineEdit(Credit);
        creditAmount->setObjectName("creditAmount");
        creditAmount->setGeometry(QRect(200, 14, 211, 31));
        creditAmount->setStyleSheet(QString::fromUtf8("    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #6b6b6b; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-size: 20pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 6px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
        creditAmountText = new QLabel(Credit);
        creditAmountText->setObjectName("creditAmountText");
        creditAmountText->setGeometry(QRect(57, 21, 131, 16));
        creditAmountText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        creditTermText = new QLabel(Credit);
        creditTermText->setObjectName("creditTermText");
        creditTermText->setGeometry(QRect(10, 65, 171, 16));
        creditTermText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        interestRateText = new QLabel(Credit);
        interestRateText->setObjectName("interestRateText");
        interestRateText->setGeometry(QRect(22, 105, 161, 21));
        interestRateText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        paymentTypeText = new QLabel(Credit);
        paymentTypeText->setObjectName("paymentTypeText");
        paymentTypeText->setGeometry(QRect(31, 146, 161, 21));
        paymentTypeText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        creditTerm = new QLineEdit(Credit);
        creditTerm->setObjectName("creditTerm");
        creditTerm->setGeometry(QRect(200, 57, 71, 31));
        creditTerm->setStyleSheet(QString::fromUtf8("    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #6b6b6b; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-size: 20pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 6px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; "));
        interestRate = new QLineEdit(Credit);
        interestRate->setObjectName("interestRate");
        interestRate->setGeometry(QRect(200, 100, 181, 31));
        interestRate->setStyleSheet(QString::fromUtf8("    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #6b6b6b; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-size: 20pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 6px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; "));
        percentText = new QLabel(Credit);
        percentText->setObjectName("percentText");
        percentText->setGeometry(QRect(390, 100, 16, 20));
        paymentType = new QComboBox(Credit);
        paymentType->setObjectName("paymentType");
        paymentType->setGeometry(QRect(200, 142, 141, 31));
        paymentType->setStyleSheet(QString::fromUtf8("    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: #6b6b6b; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 4px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; "));
        line = new QFrame(Credit);
        line->setObjectName("line");
        line->setGeometry(QRect(10, 180, 401, 21));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        monthlyPaymentsText = new QLabel(Credit);
        monthlyPaymentsText->setObjectName("monthlyPaymentsText");
        monthlyPaymentsText->setGeometry(QRect(10, 215, 161, 31));
        monthlyPaymentsText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        overpayText = new QLabel(Credit);
        overpayText->setObjectName("overpayText");
        overpayText->setGeometry(QRect(50, 282, 121, 31));
        overpayText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        totalPaymentText = new QLabel(Credit);
        totalPaymentText->setObjectName("totalPaymentText");
        totalPaymentText->setGeometry(QRect(30, 317, 141, 31));
        totalPaymentText->setStyleSheet(QString::fromUtf8("font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */"));
        pushButton_clear = new QPushButton(Credit);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(323, 214, 91, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Osaka")});
        font.setBold(true);
        font.setItalic(false);
        pushButton_clear->setFont(font);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"\n"
""));
        pushButton_calculate = new QPushButton(Credit);
        pushButton_calculate->setObjectName("pushButton_calculate");
        pushButton_calculate->setGeometry(QRect(323, 288, 91, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Osaka")});
        font1.setItalic(false);
        pushButton_calculate->setFont(font1);
        pushButton_calculate->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        background_grey = new QLabel(Credit);
        background_grey->setObjectName("background_grey");
        background_grey->setGeometry(QRect(5, 204, 312, 155));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Digital-7")});
        font2.setPointSize(30);
        background_grey->setFont(font2);
        background_grey->setAutoFillBackground(false);
        background_grey->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    font-family: 'Digital-7', Monospace; /* \320\250\321\200\320\270\321\204\321\202\321\213 */\n"
"    font-size: 30pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 8px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 3px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"	border-radius: 6px; /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
""));
        background_grey->setWordWrap(true);
        monthlyPayments_show = new QLabel(Credit);
        monthlyPayments_show->setObjectName("monthlyPayments_show");
        monthlyPayments_show->setGeometry(QRect(173, 214, 137, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Osaka")});
        font3.setPointSize(15);
        monthlyPayments_show->setFont(font3);
        monthlyPayments_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: white; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"	border-radius: 3px; \n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 3px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        monthlyPayments_show->setWordWrap(true);
        overpay_show = new QLabel(Credit);
        overpay_show->setObjectName("overpay_show");
        overpay_show->setGeometry(QRect(173, 285, 137, 31));
        overpay_show->setFont(font3);
        overpay_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: white; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"	border-radius: 3px; \n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 3px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        overpay_show->setWordWrap(true);
        totalPayment_show = new QLabel(Credit);
        totalPayment_show->setObjectName("totalPayment_show");
        totalPayment_show->setGeometry(QRect(173, 320, 137, 31));
        totalPayment_show->setFont(font3);
        totalPayment_show->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: white; /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"	border-radius: 3px; \n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 3px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        totalPayment_show->setWordWrap(true);
        line_2 = new QFrame(Credit);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(29, 162, 151, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(Credit);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(22, 120, 158, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(Credit);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(10, 77, 171, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(Credit);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(58, 32, 124, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        monthlyPayment1 = new QLabel(Credit);
        monthlyPayment1->setObjectName("monthlyPayment1");
        monthlyPayment1->setGeometry(QRect(12, 250, 137, 31));
        monthlyPayment1->setFont(font3);
        monthlyPayment1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"	border-radius: 3px; \n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 3px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        monthlyPayment1->setWordWrap(true);
        monthlyPayment2 = new QLabel(Credit);
        monthlyPayment2->setObjectName("monthlyPayment2");
        monthlyPayment2->setGeometry(QRect(173, 250, 137, 31));
        monthlyPayment2->setFont(font3);
        monthlyPayment2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: black; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"	border-radius: 3px; \n"
"    font-size: 15pt; /* \320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260 */\n"
"    padding: 3px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"    border: 1px solid #333; /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
"}\n"
""));
        monthlyPayment2->setWordWrap(true);
        label = new QLabel(Credit);
        label->setObjectName("label");
        label->setGeometry(QRect(158, 258, 21, 16));
        background_grey->raise();
        creditAmount->raise();
        creditAmountText->raise();
        creditTermText->raise();
        interestRateText->raise();
        paymentTypeText->raise();
        creditTerm->raise();
        interestRate->raise();
        percentText->raise();
        paymentType->raise();
        line->raise();
        monthlyPaymentsText->raise();
        overpayText->raise();
        totalPaymentText->raise();
        pushButton_clear->raise();
        pushButton_calculate->raise();
        monthlyPayments_show->raise();
        overpay_show->raise();
        totalPayment_show->raise();
        line_2->raise();
        line_3->raise();
        line_4->raise();
        line_5->raise();
        monthlyPayment1->raise();
        monthlyPayment2->raise();
        label->raise();

        retranslateUi(Credit);

        QMetaObject::connectSlotsByName(Credit);
    } // setupUi

    void retranslateUi(QWidget *Credit)
    {
        Credit->setWindowTitle(QCoreApplication::translate("Credit", "Credit Calc", nullptr));
        creditAmountText->setText(QCoreApplication::translate("Credit", "Credit amount:", nullptr));
        creditTermText->setText(QCoreApplication::translate("Credit", "Credit term (month):", nullptr));
        interestRateText->setText(QCoreApplication::translate("Credit", "Yearly interest rate:", nullptr));
        paymentTypeText->setText(QCoreApplication::translate("Credit", "Type of payments", nullptr));
        percentText->setText(QCoreApplication::translate("Credit", "%", nullptr));
        monthlyPaymentsText->setText(QCoreApplication::translate("Credit", "Monthly payments:", nullptr));
        overpayText->setText(QCoreApplication::translate("Credit", "Overpay:", nullptr));
        totalPaymentText->setText(QCoreApplication::translate("Credit", "Total payment:", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("Credit", "Clear", nullptr));
        pushButton_calculate->setText(QCoreApplication::translate("Credit", "Calculate", nullptr));
        background_grey->setText(QString());
        monthlyPayments_show->setText(QString());
        overpay_show->setText(QString());
        totalPayment_show->setText(QString());
        monthlyPayment1->setText(QString());
        monthlyPayment2->setText(QString());
        label->setText(QCoreApplication::translate("Credit", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Credit: public Ui_Credit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDIT_H
