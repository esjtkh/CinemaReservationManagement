#ifndef CLIENTPURCHASEHISTORY_H
#define CLIENTPURCHASEHISTORY_H

#include <QWidget>

namespace Ui {
class clientpurchasehistory;
}

class clientpurchasehistory : public QWidget
{
    Q_OBJECT

public:
    explicit clientpurchasehistory(QWidget *parent = nullptr);
    ~clientpurchasehistory();

private:
    Ui::clientpurchasehistory *ui;
};

#endif // CLIENTPURCHASEHISTORY_H
