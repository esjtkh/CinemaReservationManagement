#include "admineditpage.h"
#include "ui_admineditpage.h"
#include <QPushButton>
#include<string>
#include<mainclass.h>
#include<fstream>
using namespace std;

adminEditpage::adminEditpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adminEditpage)
{
    ui->setupUi(this);

}

adminEditpage::~adminEditpage()
{
    delete ui;
}

void adminEditpage::on_pushButton_clicked()
{


}
