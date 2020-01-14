#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows2.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    win2 = new windows2(this);
    win2->showFullScreen();

}
