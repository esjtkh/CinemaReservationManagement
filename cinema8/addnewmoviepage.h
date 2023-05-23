#ifndef ADDNEWMOVIEPAGE_H
#define ADDNEWMOVIEPAGE_H

#include <QWidget>



namespace Ui {
class addnewmoviepage;
}

class addnewmoviepage : public QWidget
{
    Q_OBJECT

public:
    explicit addnewmoviepage(QWidget *parent = nullptr);
    ~addnewmoviepage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addnewmoviepage *ui;
};

#endif // ADDNEWMOVIEPAGE_H
