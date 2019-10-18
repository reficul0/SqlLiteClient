#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "string.h"
#include "vector"
#include "algorithm"

#include "DatabaseConnection.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);

    DatabaseConnection connection;

    QStringList items;
    items.append("First");
    items.append("Second");
    items.append("Last");

    ui->listWidget->addItems(items);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_close_clicked()
{
    QApplication::quit();
}
