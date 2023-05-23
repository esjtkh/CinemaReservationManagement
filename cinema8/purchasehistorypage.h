#ifndef PURCHASEHISTORYPAGE_H
#define PURCHASEHISTORYPAGE_H

#include <QWidget>

namespace Ui {
class purchasehistorypage;
}

class purchasehistorypage : public QWidget
{
    Q_OBJECT

public:
    explicit purchasehistorypage(QWidget *parent = nullptr);
    ~purchasehistorypage();

private:
    Ui::purchasehistorypage *ui;
};

#endif // PURCHASEHISTORYPAGE_H
