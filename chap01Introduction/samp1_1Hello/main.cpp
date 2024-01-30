#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // 创建QApplication实例
    QApplication a(argc, argv);
    // 创建MainWindow实例
    MainWindow w;
    // 显示MainWindow
    w.show();

    // 执行QApplication，并返回退出码
    return a.exec();
}
