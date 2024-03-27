#ifndef CREDIT_H
#define CREDIT_H

#include <QWidget>

namespace Ui {
class Credit;
}

class Credit : public QWidget {
  Q_OBJECT

 public:
  explicit Credit(QWidget *parent = nullptr);
  ~Credit();

 private slots:

  void on_pushButton_clear_clicked();

  void on_pushButton_calculate_clicked();

 public slots:

  void paymentType_newText(const QString &arg1);

 private:
  Ui::Credit *ui;
};

#endif  // CREDIT_H
