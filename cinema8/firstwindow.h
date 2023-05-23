#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>
#include "adminloginpage.h"
#include "clientloginpage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class FirstWindow; }
QT_END_NAMESPACE

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    FirstWindow(QWidget *parent = nullptr);
    ~FirstWindow();

private slots:


    void on_adminbtn_clicked();

    void on_clientbtn_clicked();

private:
    Ui::FirstWindow *ui;
    adminloginpage *admin;
    clientloginpage *client;
};
#endif // FIRSTWINDOW_H
