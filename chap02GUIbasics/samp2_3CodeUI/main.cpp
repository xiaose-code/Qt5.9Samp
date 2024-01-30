#include "qwdlgmanual.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // 创建一个QApplication对象
    QApplication a(argc, argv);
    // 创建一个QWDlgManual对象
    QWDlgManual w;
    // 显示QWDlgManual对象
    w.show();

    // 执行QApplication对象，并返回退出代码
    return a.exec();
}
