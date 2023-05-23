#ifndef EDITMOVIEPAGE3_H
#define EDITMOVIEPAGE3_H

#include <QWidget>

namespace Ui {
class editmoviepage3;
}

class editmoviepage3 : public QWidget
{
    Q_OBJECT

public:
    explicit editmoviepage3(QWidget *parent = nullptr);
    ~editmoviepage3();

private:
    Ui::editmoviepage3 *ui;
};

#endif // EDITMOVIEPAGE3_H
