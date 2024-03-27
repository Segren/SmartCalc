#ifndef DEPOSIT_H
#define DEPOSIT_H

#include <QWidget>

namespace Ui {
class Deposit;
}

class Deposit : public QWidget {
  Q_OBJECT

 public:
  explicit Deposit(QWidget *parent = nullptr);
  ~Deposit();

 private slots:
  void on_pushButton_clear_clicked();

  void on_pushButton_calculate_clicked();

 private:
  Ui::Deposit *ui;
};

#endif  // DEPOSIT_H
