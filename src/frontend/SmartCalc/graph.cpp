#include "graph.h"
#include "ui_graph.h"
#include "mainwindow.h"

Graph::Graph(const QString &value, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Graph)
{
    ui->setupUi(this);
    ui->widget->xAxis->setRange(-20,20);
    ui->widget->yAxis->setRange(-20,20);
    this->setFixedSize(this->width(), this->height());

    QString qtInfix = value;
    QByteArray byteArray = qtInfix.toUtf8();
    char* infix = byteArray.data();
    char *postfix = tokenize(infix);
    double result=0.0;

    step = 0.1;
    xBegin = -5000;
    xEnd = 5000 + step;

    dotNum = (xEnd - xBegin)/step + 2;

    for(X=xBegin;X<xEnd;X+=step){
        x.push_back(X);
        bool noDivByZero = calculatePostfix(postfix, &result, X);
        if(noDivByZero)
        {
            if (std::abs(result - qRound(result)) < 0.0000000001) {
                result = qRound(result);
            }

            //устраняем проблемы с лишними нулями при округлении
            QString resultString = QString::number(result, 'f',10);

            //убираем лишние нули и точку если она последняя
            static QRegularExpression regexZero("0+$");
            static QRegularExpression regexDot("\\.$");
            resultString.remove(regexZero);
            resultString.remove(regexDot);

            double aValue = resultString.toDouble();
            y.push_back(aValue);
        } else {
            y.push_back(std::nan(""));
        }
    }
    free(postfix);

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();

    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
}

Graph::~Graph()
{
    delete ui;
}

void Graph::updateData(const QString &newValue) {
    ui->widget->clearGraphs();
    x.clear();
    y.clear();

    QString qtInfix = newValue;
    qtInfix.remove(' ');
    QByteArray byteArray = qtInfix.toUtf8();
    char* infix = byteArray.data();
    char *postfix = tokenize(infix);
    double result=0.0;

    step = 0.1;
    xBegin = -1000;
    xEnd = 1000 + step;

    dotNum = (xEnd - xBegin)/step + 2;

    for(X=xBegin;X<xEnd;X+=step){
        x.push_back(X);
        bool noDivByZero = calculatePostfix(postfix, &result, X);
        if(noDivByZero)
        {
            if (std::abs(result - qRound(result)) < 0.0000000001) {
                result = qRound(result);
            }

            //устраняем проблемы с лишними нулями при округлении
            QString resultString = QString::number(result, 'f',10);

            //убираем лишние нули и точку если она последняя
            static QRegularExpression regexZero("0+$");
            static QRegularExpression regexDot("\\.$");
            resultString.remove(regexZero);
            resultString.remove(regexDot);

            double aValue = resultString.toDouble();
            y.push_back(aValue);
        } else {
            y.push_back(std::nan(""));
        }
    }
    free(postfix);

    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x,y);
    ui->widget->replot();
}
