#ifndef MAINCLASS_H
#define MAINCLASS_H

#include <fstream>
#include<QString>
#include<vector>
#include<QMessageBox>
using namespace std;
class mainclass
{
public:
    mainclass();



    void newmovieinfowrite(string movie,string director,string genre,string actor1,string actor2,string actor3,string actor4)
    {
        ofstream newmoviewrite("moviesinfo.txt",ios::app);

        newmoviewrite<<movie<<endl;
        newmoviewrite<<director<<endl;
        newmoviewrite<<genre<<endl;
        newmoviewrite<<actor1<<endl<<actor2<<endl<<actor3<<endl<<actor4<<endl;
        newmoviewrite<<"-----"<<endl;


    };

    void movieinforead(vector<string> &movie,vector<string> &director,vector<string> &genre,vector<string> &actor1,vector<string> &actor2,vector<string>&actor3,vector<string> &actor4)
    {
        string movie1,director1,genre1,actor11,actor22,actor33,actor44,khat;
        ifstream newmovieread("moviesinfo.txt",ios::in);


        while (!newmovieread.eof())
        {
            newmovieread>> movie1;
            movie.push_back(movie1);
            newmovieread>> director1;
            director.push_back(director1);
            newmovieread>> genre1;
            genre.push_back(genre1);
            newmovieread>> actor11;
            actor1.push_back(actor11);
            newmovieread>> actor22;
            actor2.push_back(actor22);
            newmovieread>> actor33;
            actor3.push_back(actor33);
            newmovieread>> actor44;
            actor4.push_back(actor44);
            newmovieread>>khat;

        }
        newmovieread.close();
    };

    void writecapacity(string movie,string capacity)
    {
        ofstream cap("capacity.txt",ios::app);
        cap<<movie<<endl<<capacity<<endl;
    };



    vector<string>movie,capacity;

    void readcapacityfordelete (string deletemovie)
    {
        vector<string>movie,capacity1;
        string cpcty,movie1;
        ifstream capacity("capacity.txt");

        while(!capacity.eof())
        {
            capacity>>movie1>>cpcty;
            movie.push_back(movie1);
            capacity1.push_back(cpcty);
        }

        int n=movie.size()-1;
        ofstream write("capacity.txt");

        for(int i=0;i<n;i++)
        {
            if(movie[i]==deletemovie)
            {
                continue;
            }
            else
            {
                write<<movie[i]<<endl<<capacity1[i]<<endl;
            }
        }
    };

    void readcapacity (vector<string>&movie,vector<string>&capacity1)
    {

        string cpcty,movie1;
        ifstream readcapacity("capacity.txt");

        while(!readcapacity.eof())
        {
            readcapacity>>movie1>>cpcty;
            movie.push_back(movie1);
            capacity1.push_back(cpcty);
        }
    };

    /*void readpurchasehistory(vector<string>&user, vector<string>&movies,vector<int>&resnum)
    {

        ifstream readbuy("purchasehistory.txt");

        string user1,movies1,khat;


        while(!readbuy.eof()-1)
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

    };*/

    void writepurchasehistory(string &username,string &movies11)
    {
        /////////////////////////////////////////////read


        ifstream readbuy("purchasehistory.txt");
        vector<string>user,movies;
        vector<int>resnum;
        string user1,movies1;
        bool state=false;


        while(!readbuy.eof())
        {
            if(state==false)
            readbuy >> user1;

            if(user1=="")
            {
                readbuy.close();
                break;
            }

            user.push_back(user1);
            readbuy>>movies1;
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
            state=true;
            readbuy>>user1;

        }
        ///////////////////////////////////////////////////write
        ofstream writebuy("purchasehistory.txt",ios::trunc);

        int n=user.size();
        if(n>0)
        {
            for(int i=0;i<n;i++)
            {
                if(username!=user[i])
                {
                    writebuy<<user[i]<<endl;

                    int j=i;
                    while(movies[j]!="-----")
                    {
                        writebuy<<movies[j]<<endl;
                        j++;
                    }
                    writebuy<<movies[j]<<endl;
                }

                else
                {
                    writebuy<<username<<endl;

                    int j=i;
                    while(movies[j]!="-----")
                    {
                        writebuy<<movies[j]<<endl;
                        j++;
                    }
                    writebuy<<movies11<<endl;
                    writebuy<<movies[j]<<endl;
                }
            }
        }
        if(n<=0 && user1=="")
        {
            writebuy<<username<<endl<<movies11<<endl<<"-----"<<endl;
        }
    };

};

#endif // MAINCLASS_H
