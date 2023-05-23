#ifndef ADMINDELETEPAGE_H
#define ADMINDELETEPAGE_H

#include <QWidget>

namespace Ui {
class admindeletepage;
}

class admindeletepage : public QWidget
{
    Q_OBJECT

public:
    explicit admindeletepage(QWidget *parent = nullptr);
    ~admindeletepage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::admindeletepage *ui;
};

#endif // ADMINDELETEPAGE_H
