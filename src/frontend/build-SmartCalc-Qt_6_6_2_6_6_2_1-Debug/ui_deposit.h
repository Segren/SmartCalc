/********************************************************************************
** Form generated from reading UI file 'deposit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSIT_H
#define UI_DEPOSIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deposit {
 public:
  QLabel *background_grey;
  QLabel *totalEarned_text;
  QLabel *taxAmount_text;
  QLabel *totalAmount_text;
  QLabel *totalEarned_show;
  QLabel *taxAmount_show;
  QLabel *totalAmount_show;
  QLabel *depostAmount_text;
  QLineEdit *depositAmount_show;
  QLabel *term_text;
  QLineEdit *term_show;
  QComboBox *termType;
  QLabel *interestRate_text;
  QLineEdit *interestRate_show;
  QLabel *percentText;
  QLabel *texRate_text;
  QLineEdit *taxRate_show;
  QLabel *percentText_2;
  QLabel *peroidOfPayments_text;
  QComboBox *periodOfPaymentsType;
  QRadioButton *capitalisationButton;
  QLabel *monthlyReplenishment_text;
  QLineEdit *monthlyReplenishment_show;
  QLabel *monthlywithdrawal_text;
  QLineEdit *monthlyWithdrawal_show;
  QFrame *line;
  QFrame *line_2;
  QFrame *line_3;
  QFrame *line_4;
  QFrame *line_5;
  QFrame *line_6;
  QFrame *line_7;
  QFrame *line_8;
  QFrame *line_9;
  QFrame *line_10;
  QFrame *line_11;
  QPushButton *pushButton_clear;
  QPushButton *pushButton_calculate;

  void setupUi(QWidget *Deposit) {
    if (Deposit->objectName().isEmpty()) Deposit->setObjectName("Deposit");
    Deposit->resize(492, 435);
    background_grey = new QLabel(Deposit);
    background_grey->setObjectName("background_grey");
    background_grey->setGeometry(QRect(-152, -11, 312, 451));
    QFont font;
    font.setFamilies({QString::fromUtf8("Digital-7")});
    font.setPointSize(30);
    background_grey->setFont(font);
    background_grey->setAutoFillBackground(false);
    background_grey->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: rgb(215, 215, 215); /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-family: 'Digital-7', Monospace; /* "
        "\320\250\321\200\320\270\321\204\321\202\321\213 */\n"
        "    font-size: 30pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 8px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 3px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
        "	border-radius: 6px; /* "
        "\320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320"
        "\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
        "}\n"
        ""));
    background_grey->setWordWrap(true);
    totalEarned_text = new QLabel(Deposit);
    totalEarned_text->setObjectName("totalEarned_text");
    totalEarned_text->setGeometry(QRect(19, 22, 121, 16));
    QFont font1;
    font1.setFamilies({QString::fromUtf8("Osaka")});
    totalEarned_text->setFont(font1);
    totalEarned_text->setStyleSheet(QString::fromUtf8(
        "font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */"));
    taxAmount_text = new QLabel(Deposit);
    taxAmount_text->setObjectName("taxAmount_text");
    taxAmount_text->setGeometry(QRect(17, 123, 121, 16));
    taxAmount_text->setFont(font1);
    taxAmount_text->setStyleSheet(QString::fromUtf8(
        "font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */"));
    totalAmount_text = new QLabel(Deposit);
    totalAmount_text->setObjectName("totalAmount_text");
    totalAmount_text->setGeometry(QRect(11, 229, 131, 16));
    totalAmount_text->setFont(font1);
    totalAmount_text->setStyleSheet(QString::fromUtf8(
        "font-size: 20px; /* \320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */"));
    totalEarned_show = new QLabel(Deposit);
    totalEarned_show->setObjectName("totalEarned_show");
    totalEarned_show->setGeometry(QRect(10, 55, 137, 31));
    QFont font2;
    font2.setFamilies({QString::fromUtf8("Osaka")});
    font2.setPointSize(15);
    totalEarned_show->setFont(font2);
    totalEarned_show->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "    color: black; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: white; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "	border-radius: 3px; \n"
        "    font-size: 15pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 3px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
        "}\n"
        ""));
    totalEarned_show->setWordWrap(true);
    taxAmount_show = new QLabel(Deposit);
    taxAmount_show->setObjectName("taxAmount_show");
    taxAmount_show->setGeometry(QRect(10, 158, 137, 31));
    taxAmount_show->setFont(font2);
    taxAmount_show->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "    color: black; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: white; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "	border-radius: 3px; \n"
        "    font-size: 15pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 3px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
        "}\n"
        ""));
    taxAmount_show->setWordWrap(true);
    totalAmount_show = new QLabel(Deposit);
    totalAmount_show->setObjectName("totalAmount_show");
    totalAmount_show->setGeometry(QRect(10, 265, 137, 31));
    totalAmount_show->setFont(font2);
    totalAmount_show->setStyleSheet(QString::fromUtf8(
        "QLabel {\n"
        "	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
        "    color: black; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: white; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "	border-radius: 3px; \n"
        "    font-size: 15pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 3px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */\n"
        "}\n"
        ""));
    totalAmount_show->setWordWrap(true);
    depostAmount_text = new QLabel(Deposit);
    depostAmount_text->setObjectName("depostAmount_text");
    depostAmount_text->setGeometry(QRect(169, 11, 121, 16));
    depostAmount_text->setFont(font2);
    depositAmount_show = new QLineEdit(Deposit);
    depositAmount_show->setObjectName("depositAmount_show");
    depositAmount_show->setGeometry(QRect(180, 37, 281, 31));
    depositAmount_show->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 20pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 6px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
    term_text = new QLabel(Deposit);
    term_text->setObjectName("term_text");
    term_text->setGeometry(QRect(170, 79, 51, 16));
    term_text->setFont(font2);
    term_show = new QLineEdit(Deposit);
    term_show->setObjectName("term_show");
    term_show->setGeometry(QRect(180, 102, 131, 31));
    term_show->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 20pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 6px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
    termType = new QComboBox(Deposit);
    termType->setObjectName("termType");
    termType->setGeometry(QRect(330, 102, 131, 31));
    termType->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 15pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 4px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; "));
    interestRate_text = new QLabel(Deposit);
    interestRate_text->setObjectName("interestRate_text");
    interestRate_text->setGeometry(QRect(170, 157, 111, 16));
    interestRate_text->setFont(font2);
    interestRate_show = new QLineEdit(Deposit);
    interestRate_show->setObjectName("interestRate_show");
    interestRate_show->setGeometry(QRect(270, 150, 191, 31));
    interestRate_show->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 20pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 6px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
    percentText = new QLabel(Deposit);
    percentText->setObjectName("percentText");
    percentText->setGeometry(QRect(470, 146, 16, 20));
    texRate_text = new QLabel(Deposit);
    texRate_text->setObjectName("texRate_text");
    texRate_text->setGeometry(QRect(198, 200, 111, 16));
    texRate_text->setFont(font2);
    taxRate_show = new QLineEdit(Deposit);
    taxRate_show->setObjectName("taxRate_show");
    taxRate_show->setGeometry(QRect(270, 192, 191, 31));
    taxRate_show->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 20pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 6px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
    percentText_2 = new QLabel(Deposit);
    percentText_2->setObjectName("percentText_2");
    percentText_2->setGeometry(QRect(470, 187, 16, 20));
    peroidOfPayments_text = new QLabel(Deposit);
    peroidOfPayments_text->setObjectName("peroidOfPayments_text");
    peroidOfPayments_text->setGeometry(QRect(170, 242, 151, 16));
    peroidOfPayments_text->setFont(font2);
    periodOfPaymentsType = new QComboBox(Deposit);
    periodOfPaymentsType->setObjectName("periodOfPaymentsType");
    periodOfPaymentsType->setGeometry(QRect(180, 269, 131, 31));
    periodOfPaymentsType->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 15pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 4px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; "));
    capitalisationButton = new QRadioButton(Deposit);
    capitalisationButton->setObjectName("capitalisationButton");
    capitalisationButton->setGeometry(QRect(318, 274, 171, 20));
    monthlyReplenishment_text = new QLabel(Deposit);
    monthlyReplenishment_text->setObjectName("monthlyReplenishment_text");
    monthlyReplenishment_text->setGeometry(QRect(170, 312, 171, 16));
    monthlyReplenishment_text->setFont(font2);
    monthlyReplenishment_show = new QLineEdit(Deposit);
    monthlyReplenishment_show->setObjectName("monthlyReplenishment_show");
    monthlyReplenishment_show->setGeometry(QRect(180, 332, 281, 31));
    monthlyReplenishment_show->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 20pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 6px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
    monthlywithdrawal_text = new QLabel(Deposit);
    monthlywithdrawal_text->setObjectName("monthlywithdrawal_text");
    monthlywithdrawal_text->setGeometry(QRect(170, 372, 171, 16));
    monthlywithdrawal_text->setFont(font2);
    monthlyWithdrawal_show = new QLineEdit(Deposit);
    monthlyWithdrawal_show->setObjectName("monthlyWithdrawal_show");
    monthlyWithdrawal_show->setGeometry(QRect(180, 395, 281, 31));
    monthlyWithdrawal_show->setStyleSheet(QString::fromUtf8(
        "    color: white; /* \320\246\320\262\320\265\321\202 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "    background-color: #6b6b6b; /* "
        "\320\244\320\276\320\275\320\276\320\262\321\213\320\271 "
        "\321\206\320\262\320\265\321\202 */\n"
        "    font-size: 20pt; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    padding: 6px; /* "
        "\320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320"
        "\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 "
        "*/\n"
        "    border: 1px solid #333; /* "
        "\320\223\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\262\320\276\320\272\321\200\321\203\320\263 QLabel */"));
    line = new QFrame(Deposit);
    line->setObjectName("line");
    line->setGeometry(QRect(20, 42, 118, 3));
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    line_2 = new QFrame(Deposit);
    line_2->setObjectName("line_2");
    line_2->setGeometry(QRect(17, 136, 118, 16));
    line_2->setFrameShape(QFrame::HLine);
    line_2->setFrameShadow(QFrame::Sunken);
    line_3 = new QFrame(Deposit);
    line_3->setObjectName("line_3");
    line_3->setGeometry(QRect(14, 239, 131, 20));
    line_3->setFrameShape(QFrame::HLine);
    line_3->setFrameShadow(QFrame::Sunken);
    line_4 = new QFrame(Deposit);
    line_4->setObjectName("line_4");
    line_4->setGeometry(QRect(170, 27, 118, 3));
    line_4->setFrameShape(QFrame::HLine);
    line_4->setFrameShadow(QFrame::Sunken);
    line_5 = new QFrame(Deposit);
    line_5->setObjectName("line_5");
    line_5->setGeometry(QRect(171, 90, 41, 16));
    line_5->setFrameShape(QFrame::HLine);
    line_5->setFrameShadow(QFrame::Sunken);
    line_6 = new QFrame(Deposit);
    line_6->setObjectName("line_6");
    line_6->setGeometry(QRect(170, 167, 91, 16));
    line_6->setFrameShape(QFrame::HLine);
    line_6->setFrameShadow(QFrame::Sunken);
    line_7 = new QFrame(Deposit);
    line_7->setObjectName("line_7");
    line_7->setGeometry(QRect(200, 212, 61, 16));
    line_7->setFrameShape(QFrame::HLine);
    line_7->setFrameShadow(QFrame::Sunken);
    line_8 = new QFrame(Deposit);
    line_8->setObjectName("line_8");
    line_8->setGeometry(QRect(171, 253, 141, 16));
    line_8->setFrameShape(QFrame::HLine);
    line_8->setFrameShadow(QFrame::Sunken);
    line_9 = new QFrame(Deposit);
    line_9->setObjectName("line_9");
    line_9->setGeometry(QRect(170, 322, 171, 16));
    line_9->setFrameShape(QFrame::HLine);
    line_9->setFrameShadow(QFrame::Sunken);
    line_10 = new QFrame(Deposit);
    line_10->setObjectName("line_10");
    line_10->setGeometry(QRect(340, 287, 141, 16));
    line_10->setFrameShape(QFrame::HLine);
    line_10->setFrameShadow(QFrame::Sunken);
    line_11 = new QFrame(Deposit);
    line_11->setObjectName("line_11");
    line_11->setGeometry(QRect(171, 389, 142, 3));
    line_11->setFrameShape(QFrame::HLine);
    line_11->setFrameShadow(QFrame::Sunken);
    pushButton_clear = new QPushButton(Deposit);
    pushButton_clear->setObjectName("pushButton_clear");
    pushButton_clear->setGeometry(QRect(30, 311, 91, 51));
    QFont font3;
    font3.setFamilies({QString::fromUtf8("Osaka")});
    font3.setBold(true);
    font3.setItalic(false);
    pushButton_clear->setFont(font3);
    pushButton_clear->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "    /* "
        "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 "
        "\320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320"
        "\270 */\n"
        "    border: 2px solid #8f8f91;\n"
        "    border-radius: 6px;\n"
        "    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
        "                                      stop:0 #f6f7fa, stop:1 "
        "#dadbde);\n"
        "    min-width: 20px;\n"
        "    min-height: 10px;\n"
        "\n"
        "    /* \320\242\320\265\320\272\321\201\321\202 \320\270 "
        "\321\210\321\200\320\270\321\204\321\202 */\n"
        "    color: #333;\n"
        "    font: bold 14px;\n"
        "    padding: 6px;\n"
        "}\n"
        "\n"
        "QPushButton:hover {\n"
        "    /* "
        "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321"
        "\217 \320\277\321\200\320\270 "
        "\320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320"
        "\270 \320\272\321\203\321\200\321\201\320\276\321\200\320\260 */\n"
        "    border: 2px solid #FF7832;\n"
        "    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
        "                                      stop:0"
        " #dadbde, stop:1 #FF9739);\n"
        "}\n"
        "\n"
        "QPushButton:pressed, QPushButton:checked {\n"
        "    /* "
        "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321"
        "\217 \320\277\321\200\320\270 "
        "\320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
        "    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
        "                                      stop:0 #FF7832, stop:1 "
        "#FF9739);\n"
        "    color: white;\n"
        "}\n"
        "\n"
        ""));
    pushButton_calculate = new QPushButton(Deposit);
    pushButton_calculate->setObjectName("pushButton_calculate");
    pushButton_calculate->setGeometry(QRect(30, 373, 91, 51));
    QFont font4;
    font4.setFamilies({QString::fromUtf8("Osaka")});
    font4.setItalic(false);
    pushButton_calculate->setFont(font4);
    pushButton_calculate->setStyleSheet(QString::fromUtf8(
        "QPushButton {\n"
        "    background-color: #406592; \n"
        "    color: white; /* \320\221\320\265\320\273\321\213\320\271 "
        "\321\202\320\265\320\272\321\201\321\202 */\n"
        "    border-radius: 6px; /* "
        "\320\241\320\273\320\265\320\263\320\272\320\260 "
        "\321\201\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320"
        "\275\321\213\320\265 \321\203\320\263\320\273\321\213 */\n"
        "    font-size: 16px; /* "
        "\320\240\320\260\320\267\320\274\320\265\321\200 "
        "\321\210\321\200\320\270\321\204\321\202\320\260 */\n"
        "    border: 1px solid #404040; /* "
        "\320\242\320\276\320\275\320\272\320\260\321\217 "
        "\320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
        "    text-align: center; /* "
        "\320\222\321\213\321\200\320\260\320\262\320\275\320\270\320\262\320"
        "\260\320\275\320\270\320\265 "
        "\321\202\320\265\320\272\321\201\321\202\320\260 */\n"
        "}\n"
        "\n"
        "QPushButton:hover {\n"
        "    background-color: #72aad6; /* "
        "\320\235\320\265\320\274\320\275\320\276\320\263\320\276 "
        "\321\201\320\262\320\265\321\202\320\273\320\265\320\265 "
        "\320\277\321\200\320"
        "\270 "
        "\320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320"
        "\270 */\n"
        "}\n"
        "\n"
        "QPushButton:pressed {\n"
        "    background-color: #707070; /* \320\247\321\203\321\202\321\214 "
        "\321\202\320\265\320\274\320\275\320\265\320\265 "
        "\320\277\321\200\320\270 "
        "\320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
        "    border: 1px solid #303030; /* "
        "\320\242\320\265\320\274\320\275\320\265\320\265 "
        "\320\263\321\200\320\260\320\275\320\270\321\206\320\260 "
        "\320\277\321\200\320\270 "
        "\320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
        "}\n"
        ""));

    retranslateUi(Deposit);

    QMetaObject::connectSlotsByName(Deposit);
  }  // setupUi

  void retranslateUi(QWidget *Deposit) {
    Deposit->setWindowTitle(
        QCoreApplication::translate("Deposit", "Deposit Calc", nullptr));
    background_grey->setText(QString());
    totalEarned_text->setText(
        QCoreApplication::translate("Deposit", "Total earned", nullptr));
    taxAmount_text->setText(
        QCoreApplication::translate("Deposit", "Tax Amount", nullptr));
    totalAmount_text->setText(
        QCoreApplication::translate("Deposit", "Total Amount", nullptr));
    totalEarned_show->setText(QString());
    taxAmount_show->setText(QString());
    totalAmount_show->setText(QString());
    depostAmount_text->setText(
        QCoreApplication::translate("Deposit", "Deposit amount:", nullptr));
    depositAmount_show->setText(QString());
    term_text->setText(
        QCoreApplication::translate("Deposit", "Term:", nullptr));
    term_show->setText(QString());
    interestRate_text->setText(
        QCoreApplication::translate("Deposit", "Interest rate:", nullptr));
    interestRate_show->setText(QString());
    percentText->setText(QCoreApplication::translate("Deposit", "%", nullptr));
    texRate_text->setText(
        QCoreApplication::translate("Deposit", "Tax rate:", nullptr));
    taxRate_show->setText(QString());
    percentText_2->setText(
        QCoreApplication::translate("Deposit", "%", nullptr));
    peroidOfPayments_text->setText(
        QCoreApplication::translate("Deposit", "Period of payments:", nullptr));
    capitalisationButton->setText(QCoreApplication::translate(
        "Deposit", "capitalisation of interest", nullptr));
    monthlyReplenishment_text->setText(QCoreApplication::translate(
        "Deposit", "Monthly replenishment:", nullptr));
    monthlyReplenishment_show->setText(QString());
    monthlywithdrawal_text->setText(
        QCoreApplication::translate("Deposit", "Monthly withdrawal:", nullptr));
    monthlyWithdrawal_show->setText(QString());
    pushButton_clear->setText(
        QCoreApplication::translate("Deposit", "Clear", nullptr));
    pushButton_calculate->setText(
        QCoreApplication::translate("Deposit", "Calculate", nullptr));
  }  // retranslateUi
};

namespace Ui {
class Deposit : public Ui_Deposit {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_DEPOSIT_H
