#ifndef ADMINPAGE_H
#define ADMINPAGE_H

#include <QWidget>
#include "addnewmoviepage.h"
#include "admineditpage2.h"
#include"admindeletepage.h"
#include"purchasehistorypage.h"
namespace Ui {
class adminpage;
}

class adminpage : public QWidget
{
    Q_OBJECT

public:
    explicit adminpage(QWidget *parent = nullptr);
    ~adminpage();

private slots:
    void on_addmoviebtn_clicked();

    void on_editmoviebtn_clicked();

    void on_editmoviebtn_2_clicked();

    void on_editmoviebtn_5_clicked();

private:
    Ui::adminpage *ui;
    addnewmoviepage *addmoviepage;
    admineditpage2 *editpage2;
    admindeletepage *deletepage;
    purchasehistorypage *purchase;

};

#endif // ADMINPAGE_H
