#include "windows2.h"
#include "ui_windows2.h"
#include "mainwindow.h"

windows2::windows2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::windows2)
{
    QString menu[12] = { "Основные параметры настройки дозирования", "Рецепты",
                           "Счетчикои", "Конфигурации параметров портов связи",
                           "Тестирования модулей", "Конфигурации прибора",
                           "Основные юстировочные параметры",
                           "Юстировка прибора и просмотра/изменения юстировочных параметров",
                           "Настройка паролей", "Настройка и просмотр журнала отвесов",
                           "Просмотр журнала событий", "Просмотр кода АЦП" };
     ui->setupUi(this);
     for (int i = 0; i < 12; ++i) {
         ui->listWidget->addItem(menu[i]);
     }
     ui->listWidget->setCurrentRow( 0 );
}

windows2::~windows2()
{
    delete ui;
}


void windows2::on_pushButton_5_clicked()
{
    close();
}

void windows2::on_pushButton_clicked()
{
    if (ui->listWidget->currentRow()-1 >= 0){

     ui->listWidget->setCurrentRow( ui->listWidget->currentRow()-1);
    }
}

void windows2::on_pushButton_2_clicked()
{
    if (ui->listWidget->currentRow()+1 <= ui->listWidget -> count() - 1){

    ui->listWidget->setCurrentRow( ui->listWidget->currentRow()+1);

    }
}

void windows2::on_pushButton_3_clicked()
{
    switch (ui->listWidget->currentRow()) {
    case 0:
        ui->listWidget->clear();
        ui->listWidget->addItem("Грубо");
        ui->listWidget->addItem("Точно");
        break;
    default:
        break;
    }
}

void windows2::on_pushButton_6_clicked()
{
    ui->listWidget->clear();
    QString menu[12] = { "Основные параметры настройки дозирования", "Рецепты",
                          "Счетчикои", "Конфигурации параметров портов связи",
                          "Тестирования модулей", "Конфигурации прибора",
                          "Основные юстировочные параметры",
                          "Юстировка прибора и просмотра/изменения юстировочных параметров",
                          "Настройка паролей", "Настройка и просмотр журнала отвесов",
                          "Просмотр журнала событий", "Просмотр кода АЦП" };
    for (int i = 0; i < 12; ++i) {
        ui->listWidget->addItem(menu[i]);
    }
}
