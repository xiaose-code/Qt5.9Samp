#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // 创建QApplication实例
    Widget w;                   // 创建Widget实例
    w.show();                   // 显示Widget实例
    return a.exec();            // 执行应用，并返回退出码
}
