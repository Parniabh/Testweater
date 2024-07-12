#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "downloader.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Downloader downloader;
    downloader.execute();
}

MainWindow::~MainWindow()
{
    delete ui;
}
