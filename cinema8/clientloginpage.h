#ifndef CLIENTLOGINPAGE_H
#define CLIENTLOGINPAGE_H

#include <QWidget>
#include "clientsignuppage.h"
#include"clientpage.h"
namespace Ui {
class clientloginpage;
}

class clientloginpage : public QWidget
{
    Q_OBJECT

public:
    explicit clientloginpage(QWidget *parent = nullptr);
    ~clientloginpage();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::clientloginpage *ui;
    clientsignuppage *clientsignup;
    clientpage *clientpg;
};

#endif // CLIENTLOGINPAGE_H
