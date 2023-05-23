#include "clientpurchasehistory.h"
#include "ui_clientpurchasehistory.h"
#include<vector>
#include<fstream>
using namespace std;
clientpurchasehistory::clientpurchasehistory(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clientpurchasehistory)
{
    ui->setupUi(this);

    ifstream entry("loginentry.txt");
    vector<string>user,movies;
    vector<int>resnum;
    string loginentry;

    entry>>loginentry;

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
        if(loginentry==user[i])
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

}

clientpurchasehistory::~clientpurchasehistory()
{
    delete ui;
}
