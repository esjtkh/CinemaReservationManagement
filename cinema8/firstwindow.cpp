#include "firstwindow.h"
#include "ui_firstwindow.h"

FirstWindow::FirstWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FirstWindow)
{
    ui->setupUi(this);
}

FirstWindow::~FirstWindow()
{
    delete ui;
}




void FirstWindow::on_adminbtn_clicked()
{
    admin =new adminloginpage();

    admin->show();
}

void FirstWindow::on_clientbtn_clicked()
{
    client =new clientloginpage();

    client->show();

}
