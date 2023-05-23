#ifndef CLIENTSIGNUPPAGE_H
#define CLIENTSIGNUPPAGE_H

#include <QWidget>

namespace Ui {
class clientsignuppage;
}

class clientsignuppage : public QWidget
{
    Q_OBJECT

public:
    explicit clientsignuppage(QWidget *parent = nullptr);
    ~clientsignuppage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::clientsignuppage *ui;
};

#endif // CLIENTSIGNUPPAGE_H
