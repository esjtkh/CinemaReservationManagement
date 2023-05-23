#include "admineditpage2.h"
#include "ui_admineditpage2.h"
#include<fstream>
#include<QString>
#include<QMessageBox>
#include<vector>
#include<QFile>
#include<QTextStream>
#include"mainclass.h"

using namespace std;
admineditpage2::admineditpage2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admineditpage2)
{
    ui->setupUi(this);
}

admineditpage2::~admineditpage2()
{
    delete ui;
}

///////////////////////////////////////////////////////////////////////////////////////////////

void admineditpage2::on_pushButton_clicked()
{


    string tempname=ui->editmovieline->text().toStdString();

    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    string  movie1,director1,genre1,actor11,actor22,actor33,actor44;

    ifstream newmovieread("moviesinfo.txt");

     while (!newmovieread.eof())
    {
        string b;
        newmovieread>>movie1;
        newmovieread>>director1;
        newmovieread>>genre1;
        newmovieread>>actor11>>actor22>>actor33>>actor44;
        newmovieread >>b;
        movie.push_back(movie1);
        director.push_back((director1));
        genre.push_back(genre1);
        actor1.push_back(actor11); actor2.push_back(actor22); actor3.push_back(actor33); actor4.push_back(actor44);
    }

    int n=movie.size();
    for(int i=0;i<n;i++)
    {

        if(movie[i]==tempname)
        {
            ui->movieline->setText(QString::fromStdString(movie[i]));
            ui->directorline->setText(QString::fromStdString(director[i]));//////convert string to Qstring.
            ui->genreline->setText(QString::fromStdString(genre[i]));
            ui->actor1->setText(QString::fromStdString(actor1[i]));
            ui->actor2->setText(QString::fromStdString(actor2[i]));
            ui->actor3->setText(QString::fromStdString(actor3[i]));
            ui->actor4->setText(QString::fromStdString(actor4[i]));
        }
    }

}

///////////////////////////////////////////////////////////////////////////////////////////

void admineditpage2::on_pushButton_2_clicked()
{
    string searchtext,moviel,directorl,genreline,actor1line,actor2line,actor3line,actor4line;

    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    mainclass mncls;


    searchtext=ui->editmovieline->text().toStdString();
    moviel=ui->movieline->text().toStdString();
    directorl=ui->directorline->text().toStdString();
    genreline=ui->genreline->text().toStdString();
    actor1line=ui->actor1->text().toStdString();
    actor2line=ui->actor2->text().toStdString();
    actor3line=ui->actor3->text().toStdString();
    actor4line=ui->actor4->text().toStdString();

    mncls.movieinforead(movie,director,genre,actor1,actor2,actor3,actor4);


    int n=movie.size()-1;

    ofstream infowrite("moviesinfo.txt",ios::out | ios::trunc);

    if(!infowrite.is_open())
    {
        QMessageBox m;
        m.setText("writefile not opened!");
        m.exec();
        m.show();
    }
    for(int i=0;i<n;i++)
    {

        if(movie[i]!=searchtext)
            infowrite<< movie[i]<<endl<<director[i]<<endl<<genre[i]<<endl<<actor1[i]<<endl<<actor2[i]<<endl<<actor3[i]<<endl<<actor4[i]<<endl<<"-----"<<endl;
        else
        {
            infowrite<<moviel<<endl<<directorl<<endl<<genreline<<endl<<actor1line<<endl<<actor2line<<endl<<actor3line<<endl<<actor4line<<endl<<"-----"<<endl;
        }
    }
    hide();

}
