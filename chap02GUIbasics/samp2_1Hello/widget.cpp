#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) : QWidget(parent),
                                  ui(new Ui::Widget)
{
    // 初始化UI
    ui->setupUi(this);
}

Widget::~Widget()
{
    // 删除UI
    delete ui;
}
