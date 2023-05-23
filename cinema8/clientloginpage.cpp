#include "clientloginpage.h"
#include "ui_clientloginpage.h"
#include <fstream>
#include<QMessageBox>
using namespace std;
clientloginpage::clientloginpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientloginpage)
{
    ui->setupUi(this);
}

clientloginpage::~clientloginpage()
{
    delete ui;
}

void clientloginpage::on_pushButton_2_clicked()
{
    clientsignup=new clientsignuppage();
    hide();
    clientsignup->show();
}

void clientloginpage::on_pushButton_clicked()
{
    ifstream clientinfo("clientinfo.txt",ios::in);
    ofstream entry("loginentry.txt",ios::trunc);

    string userline=ui->userline->text().toStdString();
    string passline=ui->passline->text().toStdString();
    string user,pass;
    bool state=true;
    while(!clientinfo.eof())
    {
        clientinfo>>user>>pass;
        if(user==userline && pass==passline)
        {
            entry<<user<<endl;
            hide();
            clientpg=new clientpage();
            clientpg->show();
            state=false;
            clientinfo.close();
            break;
        }
    }
    if(state==true)
    {
QMessageBox qm;
qm.setText("Entry is not valid !");
qm.exec();
qm.show();
    }





}
