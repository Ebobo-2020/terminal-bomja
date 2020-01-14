#ifndef WINDOWS2_H
#define WINDOWS2_H

#include <QMainWindow>

namespace Ui {
class windows2;
}

class windows2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit windows2(QWidget *parent = 0);
    ~windows2();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::windows2 *ui;
};

#endif // WINDOWS2_H
