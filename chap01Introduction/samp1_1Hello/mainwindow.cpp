#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),
                                          ui(new Ui::MainWindow)
{
    // 初始化UI
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    // 删除UI指针
    delete ui;
}
