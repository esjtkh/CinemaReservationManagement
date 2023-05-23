#include "movieinfopage.h"
#include "ui_movieinfopage.h"
#include"mainclass.h"
#include<vector>

using namespace std;


movieinfopage::movieinfopage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::movieinfopage)
{
    ui->setupUi(this);

    ifstream moviename("moviename.txt");
    string namemovie,director1,genre1,actor111,actor222,actor333,actor444,cpctyname;
    vector<string> movie,director,genre,actor1,actor2,actor3,actor4;
    vector<QString>movie1;
    ifstream capacity("capacity.txt");


    moviename>>namemovie>>director1>>genre1>>actor111>>actor222>>actor333>>actor444;

    capacity>>cpctyname;
    while(cpctyname !=namemovie)
    {
        capacity>>cpctyname;
    }
    capacity>>cpctyname;

    ui->movielabel->setText(QString::fromStdString(namemovie));
    ui->directorlabel->setText(QString::fromStdString(director1));
    ui->genrelabel->setText(QString::fromStdString(genre1));
    ui->actor1label->setText(QString::fromStdString(actor111));
    ui->actor2label->setText(QString::fromStdString(actor222));
    ui->actor3label->setText(QString::fromStdString(actor333));
    ui->actor4label->setText(QString::fromStdString(actor444));
    ui->capacitylabel->setText(QString::fromStdString(cpctyname));


}

movieinfopage::~movieinfopage()
{
    delete ui;
}

void movieinfopage::on_pushButton_clicked()
{
    ifstream moviename("moviename.txt");
    string namemovie;
    moviename>>namemovie;

    ifstream entry("loginentry.txt");
    mainclass mncls;

    string reservedmovie=ui->movielabel->text().toStdString();
    vector<string>movie111,capacity111;

    mncls.readcapacity(movie111,capacity111);
    ofstream capacity("capacity.txt",ios::trunc);

    int n=movie111.size()-1;
    int num;
    bool state=false;
    string username;

    entry>>username;

    for(int i=0;i<n;i++)
    {
        if(namemovie==movie111[i])
        {
            num=stoi(capacity111[i]); //convert string to int.
            if(num!=0)
            {
                num--;
                state=true;
                mncls.writepurchasehistory(username,reservedmovie);
                QMessageBox qm;
                qm.setText("Movie succesfully reserved.");
                qm.exec();
                qm.show();
                hide();
            }
            else
            {
                QMessageBox qm;
                qm.setText("Movie is sold out.");
                qm.exec();
                qm.show();
                hide();
            }
            break;
        }
    }
    if(state==true)   //update capcity file.
    {
        for(int i=0;i<n;i++)
        {
            if(movie111[i]==namemovie)
            {
                capacity<<namemovie<<endl<<to_string(num)<<endl;
            }
            else
            {
                capacity<<movie111[i]<<endl<<capacity111[i]<<endl; //convert int to string.
            }
        }
    }


}
