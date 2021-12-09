#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lineEdit, SIGNAL(clicked()), this, SLOT(handlelineeditclicked()));
    connect(ui->lineEdit_2, SIGNAL(clicked()), this, SLOT(handlelineeditclicked1()));
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::handlelineeditclicked()

{

    // Processing lineedit clicked In this function we will lineedit The background color changes to red

    ui->lineEdit->setStyleSheet("background-color:red");

}

void MainWindow::handlelineeditclicked1()
{
    ui->lineEdit_2->setText("done");
}
