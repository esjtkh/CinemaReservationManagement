#include "editmoviepage3.h"
#include "ui_editmoviepage3.h"
#include<fstream>

using namespace std;
editmoviepage3::editmoviepage3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::editmoviepage3)
{
    ui->setupUi(this);
    string movie,director,genre,actor1,actor2,actor3,actor4;


    string tempname;
    ifstream readtemp("temp.txt",ios::in);
    readtemp>>tempname;


    ifstream newmovieread("moviesinfo.txt");
    while (!newmovieread.eof())
    {
        string a;
        newmovieread>>movie;
        newmovieread>>director;
        newmovieread>>genre;
        newmovieread>>actor1>>actor2>>actor3>>actor4;
        newmovieread >>a;
        if(movie==tempname)
        {
            ui->movieline->setText(QString::fromStdString(movie));
            ui->directorline->setText(QString::fromStdString(director));//////convert string to Qstring.
            ui->genreline->setText(QString::fromStdString(genre));
            ui->actor1->setText(QString::fromStdString(actor1));
            ui->actor2->setText(QString::fromStdString(actor2));
            ui->actor3->setText(QString::fromStdString(actor3));
            ui->actor4->setText(QString::fromStdString(actor4));
            break;
        }
    }

}

editmoviepage3::~editmoviepage3()
{
    delete ui;
}
