#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui
{
    class Widget;
}

// 声明一个Widget类，继承自QWidget
class Widget : public QWidget
{
    Q_OBJECT

public:
    // 构造函数，parent参数默认值为0
    explicit Widget(QWidget *parent = 0);
    // 析构函数
    ~Widget();

private:
    // 声明一个Ui::Widget类型的变量ui
    Ui::Widget *ui;
};

#endif // WIDGET_H
