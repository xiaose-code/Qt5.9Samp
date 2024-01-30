#ifndef QMYWIDGET_H
#define QMYWIDGET_H

#include <QWidget>
#include "qperson.h"

namespace Ui
{
    class QmyWidget;
}

class QmyWidget : public QWidget
{
    Q_OBJECT

private:
    QPerson *boy;
    QPerson *girl;

public:
    explicit QmyWidget(QWidget *parent = 0);
    ~QmyWidget();

private:
    Ui::QmyWidget *ui;

signals:

private slots:
    // 自定义槽函数
    void on_ageChanged(int value);
    void on_spin_valueChanged(int arg1);

    // 界面按钮的槽函数
    /// \brief 点击清除按钮
    void on_btnClear_clicked();
    /// \brief 点击男生计数按钮
    void on_btnBoyInc_clicked();
    /// \brief 点击女生计数按钮
    void on_btnGirlInc_clicked();
    /// \brief 点击班级信息按钮
    void on_btnClassInfo_clicked();
};

#endif // QMYWIDGET_H
