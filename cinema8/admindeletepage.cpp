#include "admindeletepage.h"
#include "ui_admindeletepage.h"
#include <fstream>
#include<QMessageBox>
#include<vector>
#include "mainclass.h"
using namespace std;

admindeletepage::admindeletepage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admindeletepage)
{
    ui->setupUi(this);
}

admindeletepage::~admindeletepage()
{
    delete ui;
}

void admindeletepage::on_pushButton_clicked()
{
    string deletetext=ui->deletemovieline->text().toStdString();

    ifstream readinfo("moviesinfo.txt");
    ifstream capacity("capacity.txt");
    mainclass mncls;

    if(!readinfo.is_open())
    {
        QMessageBox q;
        q.setText("file not opened.");
        q.exec();
        q.show();
    }

    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    string movie1,director1,genre1,actor11,actor22,actor33,actor44;


    while(!readinfo.eof())
    {
        string khat;
        readinfo >>movie1>>director1>>genre1>>actor11>>actor22>>actor33>>actor44>>khat;
        movie.push_back(movie1);
        director.push_back(director1);
        genre.push_back(genre1);
        actor1.push_back(actor11);
        actor2.push_back(actor22);
        actor3.push_back(actor33);
        actor4.push_back(actor44);

    }

    ofstream write("moviesinfo.txt");

    int i=movie.size()-1;                ////important/////

    for(int j=0;j<i;j++)
    {
        if(movie[j]==deletetext)
            continue;
        else
        {
            write << movie[j]<<endl<<director[j]<<endl<< genre[j]<<endl<< actor1[j]<<endl<< actor2[j]<<endl<< actor3[j]<<endl<< actor4[j]<<endl<<"-----"<<endl;
        }
    }

    mncls.readcapacityfordelete(deletetext);



    movie.clear();
    director.clear();
    genre.clear();
    actor1.clear();
    actor2.clear();
    actor3.clear();
    actor4.clear();

    hide();

}
