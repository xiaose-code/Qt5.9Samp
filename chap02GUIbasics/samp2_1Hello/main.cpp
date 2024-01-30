#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // 创建QApplication实例
    QApplication a(argc, argv);
    // 创建Widget实例
    Widget w;
    // 显示Widget实例
    w.show();

    // 执行应用，并返回退出码
    return a.exec();
}
