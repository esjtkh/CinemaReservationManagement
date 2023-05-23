#ifndef ADMINEDITPAGE2_H
#define ADMINEDITPAGE2_H

#include <QWidget>

namespace Ui {
class admineditpage2;
}

class admineditpage2 : public QWidget
{
    Q_OBJECT

public:
    explicit admineditpage2(QWidget *parent = nullptr);
    ~admineditpage2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::admineditpage2 *ui;

};

#endif // ADMINEDITPAGE2_H
