#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui
{
    class Widget;   // ui_widget.h 文件里定义的类，外部声明
}

// 声明一个Widget类，继承自QWidget
class Widget : public QWidget
{
    Q_OBJECT    // 宏，使用Qt信号与槽机制必须添加

public:
    explicit Widget(QWidget *parent = 0);    // 构造函数
    ~Widget();                               // 析构函数

private:
    // Ui::Widget类型的一个指针，指向可视化的界面
    Ui::Widget *ui;
};

#endif // WIDGET_H
