/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *LabDemo;
    QPushButton *btnClose;

    void setupUi(QWidget *Widget)
    {
        // 如果Widget没有对象名称，则设置为Widget
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        // 设置Widget的大小
        Widget->resize(280, 168);
        // 创建一个名为LabDemo的标签，并设置其位置
        LabDemo = new QLabel(Widget);
        LabDemo->setObjectName(QStringLiteral("LabDemo"));
        LabDemo->setGeometry(QRect(50, 20, 201, 51));
        // 设置字体
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        LabDemo->setFont(font);
        // 创建一个名为btnClose的按钮，并设置其位置
        btnClose = new QPushButton(Widget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(150, 120, 75, 23));

        // 重新翻译UI
        retranslateUi(Widget);
        // 连接btnClose的点击信号和Widget的关闭槽
        QObject::connect(btnClose, SIGNAL(clicked()), Widget, SLOT(close()));

        // 连接UI的信号和槽
        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        // 设置窗口标题
        Widget->setWindowTitle(QApplication::translate("Widget", "My First Demo", Q_NULLPTR));
        // 设置标签文本
        LabDemo->setText(QApplication::translate("Widget", "Hello, World", Q_NULLPTR));
        // 设置按钮文本
        btnClose->setText(QApplication::translate("Widget", "Close", Q_NULLPTR));
    } // retranslateUi
};

namespace Ui
{
    class Widget : public Ui_Widget
    {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
