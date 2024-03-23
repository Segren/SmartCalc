/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QCustomPlot *widget;
    QLabel *background_grey;
    QLabel *label_xmin;
    QLabel *label_xmax;
    QLabel *label_ymin;
    QLabel *label_ymax;
    QLabel *label_step;
    QLabel *background_grey_x;
    QLabel *background_grey_y;
    QLabel *background_grey_y_2;

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName("Graph");
        Graph->resize(420, 302);
        widget = new QCustomPlot(Graph);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 381, 211));
        background_grey = new QLabel(Graph);
        background_grey->setObjectName("background_grey");
        background_grey->setGeometry(QRect(10, 10, 401, 231));
        QFont font;
        font.setFamilies({QString::fromUtf8("Digital-7")});
        font.setPointSize(30);
        background_grey->setFont(font);
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
        label_xmin = new QLabel(Graph);
        label_xmin->setObjectName("label_xmin");
        label_xmin->setGeometry(QRect(50, 250, 111, 21));
        label_xmax = new QLabel(Graph);
        label_xmax->setObjectName("label_xmax");
        label_xmax->setGeometry(QRect(50, 270, 101, 21));
        label_ymin = new QLabel(Graph);
        label_ymin->setObjectName("label_ymin");
        label_ymin->setGeometry(QRect(177, 250, 101, 21));
        label_ymax = new QLabel(Graph);
        label_ymax->setObjectName("label_ymax");
        label_ymax->setGeometry(QRect(177, 270, 101, 21));
        label_step = new QLabel(Graph);
        label_step->setObjectName("label_step");
        label_step->setGeometry(QRect(308, 250, 81, 21));
        background_grey_x = new QLabel(Graph);
        background_grey_x->setObjectName("background_grey_x");
        background_grey_x->setGeometry(QRect(44, 250, 96, 41));
        background_grey_x->setFont(font);
        background_grey_x->setAutoFillBackground(false);
        background_grey_x->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    padding: 8px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"	border-radius: 6px; /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
""));
        background_grey_x->setWordWrap(true);
        background_grey_y = new QLabel(Graph);
        background_grey_y->setObjectName("background_grey_y");
        background_grey_y->setGeometry(QRect(173, 250, 100, 41));
        background_grey_y->setFont(font);
        background_grey_y->setAutoFillBackground(false);
        background_grey_y->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    padding: 8px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"	border-radius: 6px; /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
""));
        background_grey_y->setWordWrap(true);
        background_grey_y_2 = new QLabel(Graph);
        background_grey_y_2->setObjectName("background_grey_y_2");
        background_grey_y_2->setGeometry(QRect(302, 250, 68, 21));
        background_grey_y_2->setFont(font);
        background_grey_y_2->setAutoFillBackground(false);
        background_grey_y_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"    color: white; /* \320\246\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    background-color: rgb(215, 215, 215); /* \320\244\320\276\320\275\320\276\320\262\321\213\320\271 \321\206\320\262\320\265\321\202 */\n"
"    padding: 8px; /* \320\222\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\320\265 \320\276\321\202\321\201\321\202\321\203\320\277\321\213 */\n"
"	border-radius: 6px; /* \320\241\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"}\n"
""));
        background_grey_y_2->setWordWrap(true);
        background_grey_y_2->raise();
        background_grey_y->raise();
        background_grey_x->raise();
        background_grey->raise();
        widget->raise();
        label_xmin->raise();
        label_xmax->raise();
        label_ymin->raise();
        label_ymax->raise();
        label_step->raise();

        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Graph", nullptr));
        background_grey->setText(QString());
        label_xmin->setText(QCoreApplication::translate("Graph", "\321\205.min:   -5000", nullptr));
        label_xmax->setText(QCoreApplication::translate("Graph", "\321\205.max:    5000", nullptr));
        label_ymin->setText(QCoreApplication::translate("Graph", "y.min:   -1*10^6", nullptr));
        label_ymax->setText(QCoreApplication::translate("Graph", "y.max:    1*10^6", nullptr));
        label_step->setText(QCoreApplication::translate("Graph", "step:   0.1", nullptr));
        background_grey_x->setText(QString());
        background_grey_y->setText(QString());
        background_grey_y_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
