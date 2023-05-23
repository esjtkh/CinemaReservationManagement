#ifndef SHOWMOVIESPAGE_H
#define SHOWMOVIESPAGE_H

#include <QWidget>
#include"movieinfopage.h"
namespace Ui {
class showmoviespage;
}

class showmoviespage : public QWidget
{
    Q_OBJECT

public:
    explicit showmoviespage(QWidget *parent = nullptr);
    ~showmoviespage();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::showmoviespage *ui;
    movieinfopage *infopage;
};

#endif // SHOWMOVIESPAGE_H
