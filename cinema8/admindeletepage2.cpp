#include "admindeletepage2.h"
#include "ui_admindeletepage2.h"

admindeletepage2::admindeletepage2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admindeletepage2)
{
    ui->setupUi(this);
}

admindeletepage2::~admindeletepage2()
{
    delete ui;
}
