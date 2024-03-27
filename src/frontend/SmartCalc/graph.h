#ifndef GRAPH_H
#define GRAPH_H

#include <QWidget>

namespace Ui {
class Graph;
}

class Graph : public QWidget {
  Q_OBJECT

 public:
  explicit Graph(const QString &value, QWidget *parent = nullptr);
  void updateData(const QString &newValue);
  ~Graph();

 private:
  Ui::Graph *ui;
  double xBegin, xEnd, step, X;
  int dotNum;
  QVector<double> x, y;
};

#endif  // GRAPH_H
