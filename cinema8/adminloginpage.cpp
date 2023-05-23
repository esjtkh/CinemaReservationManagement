#include "adminloginpage.h"
#include "ui_adminloginpage.h"

using namespace std;

adminloginpage::adminloginpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminloginpage)
{
    ui->setupUi(this);
}

adminloginpage::~adminloginpage()
{
    delete ui;
}

void adminloginpage::on_pushButton_clicked()
{

    admnpg =new adminpage();

    string user=ui->userline->text().toStdString();
    string pass=ui->passline->text().toStdString();
    if(user=="esjkhademi" && pass=="123")
    {
     hide();
     admnpg->show();
    }


}
