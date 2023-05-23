#include "showmoviespage.h"
#include "ui_showmoviespage.h"
#include<vector>
#include"mainclass.h"



showmoviespage::showmoviespage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showmoviespage)
{
    ui->setupUi(this);

    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    vector<QString>movie1;


    mainclass mncls;

    mncls.movieinforead(movie,director,genre,actor1,actor2,actor3,actor4);

    int n=movie.size()-1;

    for(int i=0 ;i<n;i++)
    {
        movie1.push_back(QString::fromStdString(movie[i]));

        ui->textBrowser->append("-"+movie1[i]);

    }


}

showmoviespage::~showmoviespage()
{
    delete ui;
}


void showmoviespage::on_pushButton_clicked()
{
    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    vector<QString>movie1;
    mainclass mncls;
    mncls.movieinforead(movie,director,genre,actor1,actor2,actor3,actor4);
    int n=movie.size()-1;

    if(ui->radiomovie->isChecked()==true)
    {
        for(int i=0;i<n;i++)
        {
            if(ui->searchline->text().toStdString()==movie[i])
                ui->textBrowser->setText("-"+movie1[i]);
        }
    }
    else if(ui->radioactor->isChecked()==true)
    {
        for(int i=0;i<n;i++)
        {
            if(ui->searchline->text().toStdString()==actor1[i] ||ui->searchline->text().toStdString()==actor2[i]||ui->searchline->text().toStdString()==actor3[i]||ui->searchline->text().toStdString()==actor4[i])
                ui->textBrowser->setText("-"+movie1[i]);
        }
    }
    else if(ui->radiogenre->isChecked()==true)
    {
        for(int i=0;i<n;i++)
        {
            if(ui->searchline->text().toStdString()==genre[i])
                ui->textBrowser->setText("-"+movie1[i]);
        }
    }
    else if(ui->radiodirector->isChecked()==true)
    {
        for(int i=0;i<n;i++)
        {
            if(ui->searchline->text().toStdString()==director[i])
                ui->textBrowser->setText("-"+movie1[i]);
        }
    }

}

void showmoviespage::on_pushButton_2_clicked()
{
    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    vector<QString>movie1;
    mainclass mncls;
    mncls.movieinforead(movie,director,genre,actor1,actor2,actor3,actor4);

    int n=movie.size()-1;


    for(int i=0;i<n;i++)
    {
        string a=ui->searchline->text().toStdString();
        if(a==movie[i])
        {
            ofstream moviename("moviename.txt");
            moviename<<movie[i]<<endl<<director[i]<<endl<<genre[i]<<endl<<actor1[i]<<endl<<actor2[i]<<endl<<actor3[i]<<endl<<actor4[i]<<endl;
            moviename.close();
            infopage =new movieinfopage();
            infopage->show();
            break;
        }
    }
}
