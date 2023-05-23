#include "clientsignuppage.h"
#include "ui_clientsignuppage.h"
#include <fstream>
using namespace std;
clientsignuppage::clientsignuppage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientsignuppage)
{
    ui->setupUi(this);
}

clientsignuppage::~clientsignuppage()
{
    delete ui;
}

void clientsignuppage::on_pushButton_clicked()
{
    //enter signup data in file.
     ofstream clientinfo("clientinfo.txt",  ios::app);
     string user=ui->userline->text().toStdString();
     string pass=ui->passline->text().toStdString();
     clientinfo<<user<<endl<<pass<<endl;
     hide();

}
