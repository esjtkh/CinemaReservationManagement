#ifndef MAIN_H
#define MAIN_H
#include <fstream>
#include <QString>
using namespace std;

class main
{
public:
    main();

    void newmovieinfowrite(QString movie,QString director,QString genre,QString actors)
    {
      ofstream newmoviewrite("moviesinfo",ios::app);

      newmoviewrite<<movie.toStdString()<<endl;
      newmoviewrite<<director.toStdString()<<endl;
      newmoviewrite<<genre.toStdString()<<endl;
      newmoviewrite<<actors.toStdString()<<endl;

    };










};

#endif // MAIN_H
