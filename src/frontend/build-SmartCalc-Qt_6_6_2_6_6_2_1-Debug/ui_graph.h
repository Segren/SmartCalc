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

    void setupUi(QWidget *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName("Graph");
        Graph->resize(420, 250);
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
        background_grey->raise();
        widget->raise();

        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QWidget *Graph)
    {
        Graph->setWindowTitle(QCoreApplication::translate("Graph", "Graph", nullptr));
        background_grey->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
