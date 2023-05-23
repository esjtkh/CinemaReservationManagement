#ifndef ADMINLOGINPAGE_H
#define ADMINLOGINPAGE_H

#include <QWidget>
#include "adminpage.h"


namespace Ui {
class adminloginpage;
}

class adminloginpage : public QWidget
{
    Q_OBJECT

public:
    explicit adminloginpage(QWidget *parent = nullptr);
    ~adminloginpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminloginpage *ui;

    adminpage *admnpg;
};

#endif // ADMINLOGINPAGE_H
