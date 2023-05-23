#ifndef MOVIEINFOPAGE_H
#define MOVIEINFOPAGE_H

#include <QWidget>

namespace Ui {
class movieinfopage;
}

class movieinfopage : public QWidget
{
    Q_OBJECT

public:
    explicit movieinfopage(QWidget *parent = nullptr);
    ~movieinfopage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::movieinfopage *ui;
};

#endif // MOVIEINFOPAGE_H
