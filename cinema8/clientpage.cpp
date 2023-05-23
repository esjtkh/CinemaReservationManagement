#include "clientpage.h"
#include "ui_clientpage.h"

clientpage::clientpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientpage)
{
    ui->setupUi(this);
}

clientpage::~clientpage()
{
    delete ui;
}



void clientpage::on_pushButton1_clicked()
{
    showmovies =new showmoviespage();
    showmovies->show();
}

void clientpage::on_pushButton_2_clicked()
{
   purchase =new clientpurchasehistory();
   purchase->show();
}
