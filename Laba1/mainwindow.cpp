#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>
#include <cstdlib>
#include <ctime>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand((unsigned) time(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_main_clicked()
{
    int randomNumber = (rand() % 5) + 1;
    switch (randomNumber) {
    case 1:
        ui->btn_change->setStyleSheet("background-color: red");
        ui->btn_change->setText("Style 1");
        break;
    case 2:
        ui->btn_change->setStyleSheet("background-color: gray");
        ui->btn_change->setText("Style 2");
        break;
    case 3:
        ui->btn_change->setStyleSheet("background-color: green");
        ui->btn_change->setText("Style 3");
        break;
    case 4:
        ui->btn_change->setStyleSheet("background-color: blue");
        ui->btn_change->setText("Style 4");
        break;
    case 5:
        ui->btn_change->setStyleSheet("background-color: purple");
        ui->btn_change->setText("Style 5");
        break;
    default:
        ui->btn_change->setStyleSheet("background-color: white");
        ui->btn_change->setText("Style default");
        break;
    }
}

