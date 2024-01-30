#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui
{
    class MainWindow;
}

// 声明一个MainWindow类，继承自QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // 构造函数，传入父类指针
    explicit MainWindow(QWidget *parent = 0);
    // 析构函数
    ~MainWindow();

private:
    // 声明一个ui指针
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
