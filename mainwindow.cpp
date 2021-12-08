#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    setStyleSheet("QWidget{background-color:rgb(150,150,150);}");
}


MainWindow::~MainWindow()
{
    qDebug()<<"~MainWindow";
    delete ui;
}
