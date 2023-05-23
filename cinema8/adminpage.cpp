#include "adminpage.h"
#include "ui_adminpage.h"

adminpage::adminpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminpage)
{
    ui->setupUi(this);
}

adminpage::~adminpage()
{
    delete ui;
}

void adminpage::on_addmoviebtn_clicked()
{
    addmoviepage=new addnewmoviepage();
    addmoviepage->show();
}

void adminpage::on_editmoviebtn_clicked()
{
    editpage2=new admineditpage2();
    editpage2->show();
}

void adminpage::on_editmoviebtn_2_clicked()
{
   deletepage =new admindeletepage();
   deletepage->show();

}

void adminpage::on_editmoviebtn_5_clicked()
{
    purchase=new purchasehistorypage();
    purchase->show();
}
