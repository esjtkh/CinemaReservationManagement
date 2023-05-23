#include "addnewmoviepage.h"
#include "ui_addnewmoviepage.h"
#include "main.h"
#include "mainclass.h"


addnewmoviepage::addnewmoviepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addnewmoviepage)
{
    ui->setupUi(this);
}

addnewmoviepage::~addnewmoviepage()
{
    delete ui;
}


void addnewmoviepage::on_pushButton_clicked()
{
   string movie,director,genre,actor1,actor2,actor3,actor4;

   movie=ui->movieline->text().toStdString();

   director=ui->directorline->text().toStdString();

   genre=ui->genreline->text().toStdString();

   actor1= ui->actor1->text().toStdString();
   actor2=ui->actor2->text().toStdString();
   actor3=ui->actor3->text().toStdString();
   actor4=ui->actor4->text().toStdString();

   mainclass mncls;
   mncls.newmovieinfowrite(movie,director,genre,actor1,actor2,actor3,actor4);
   string capacity =ui->capacityline->text().toStdString();
   mncls.writecapacity(movie,capacity);
   hide();

}
