#include "purchasehistorypage.h"
#include "ui_purchasehistorypage.h"
#include<fstream>
#include"mainclass.h"
#include<vector>
using namespace std;
vector<int>resnum;

purchasehistorypage::purchasehistorypage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::purchasehistorypage)
{
    ui->setupUi(this);

    ifstream readpurchase("purchasehistory.txt");
    mainclass mncls;
    vector<string>user,movies;
    vector<int>resnum;
    //  vector<QString>quser,qmovies;
   // mncls.readpurchasehistory(user,movies,resnum);

    ifstream readbuy("purchasehistory.txt");

    string user1,movies1,khat;


    while(!readbuy.eof())
    {
        readbuy >> user1;
        if(user1 =="")
            break;
        readbuy>>movies1;
        user.push_back(user1);
        movies.push_back(movies1);
        int i=1;

        while(movies1 !="-----")
        {
             readbuy>>movies1;

            if(movies1!="-----")
            {
            movies.push_back(movies1);
            i++;
            }
        }
        resnum.push_back(i);
        movies.push_back(movies1);

    }


    int n=user.size()-1;

    for(int i=0;i<n;i++)
    {
        QString username,moviesname;
        username=QString::fromStdString(user[i]);
        ui->purchasetextbrowser->append(username);
        if(i!=0)
        {
            for(int j=resnum[i-1];j<resnum[i]+resnum[i-1];j++)
            {
                moviesname=QString::fromStdString(movies[j]);
                ui->purchasetextbrowser->append(moviesname);
            }
             ui->purchasetextbrowser->append("-----");

        }
        else if(i==0)
        {
            for(int j=0;j<resnum[i];j++)
            {
                moviesname=QString::fromStdString(movies[j]);
                ui->purchasetextbrowser->append(moviesname);
            }
             ui->purchasetextbrowser->append("-----");
        }

    }






}

purchasehistorypage::~purchasehistorypage()
{
    delete ui;
}
