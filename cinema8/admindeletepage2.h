#ifndef ADMINDELETEPAGE2_H
#define ADMINDELETEPAGE2_H

#include <QWidget>

namespace Ui {
class admindeletepage2;
}

class admindeletepage2 : public QWidget
{
    Q_OBJECT

public:
    explicit admindeletepage2(QWidget *parent = nullptr);
    ~admindeletepage2();

private:
    Ui::admindeletepage2 *ui;
};

#endif // ADMINDELETEPAGE2_H
