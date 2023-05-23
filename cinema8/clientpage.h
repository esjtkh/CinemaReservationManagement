#ifndef CLIENTPAGE_H
#define CLIENTPAGE_H

#include <QWidget>
#include"showmoviespage.h"
#include"clientpurchasehistory.h"

namespace Ui {
class clientpage;
}

class clientpage : public QWidget
{
    Q_OBJECT

public:
    explicit clientpage(QWidget *parent = nullptr);
    ~clientpage();

private slots:


    void on_pushButton1_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::clientpage *ui;
    showmoviespage *showmovies;

    clientpurchasehistory*purchase;
};

#endif // CLIENTPAGE_H
