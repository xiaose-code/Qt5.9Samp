#include "qwdialog.h"
#include "ui_qwdialog.h"

QWDialog::QWDialog(QWidget *parent) : QDialog(parent),
                                      ui(new Ui::QWDialog)
{
    ui->setupUi(this); // UI初始化

    connect(ui->rBtnBlue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));  // 信号与槽的关联
    connect(ui->rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));   // 信号与槽的关联
    connect(ui->rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor())); // 信号与槽的关联
}

QWDialog::~QWDialog()
{
    delete ui;
}

// 设置字体颜色
void QWDialog::setTextFontColor()
{
    // 获取文本框的调色板
    QPalette plet = ui->txtEdit->palette();
    // 如果蓝色按钮被选中
    if (ui->rBtnBlue->isChecked())
        // 设置文本框的文本颜色为蓝色
        plet.setColor(QPalette::Text, Qt::blue);
    // 如果红色按钮被选中
    else if (ui->rBtnRed->isChecked())
        // 设置文本框的文本颜色为红色
        plet.setColor(QPalette::Text, Qt::red);
    // 如果黑色按钮被选中
    else if (ui->rBtnBlack->isChecked())
        // 设置文本框的文本颜色为黑色
        plet.setColor(QPalette::Text, Qt::black);
    // 如果未选中任何按钮
    else
        // 设置文本框的文本颜色为黑色
        plet.setColor(QPalette::Text, Qt::black);

    // 设置文本框的调色板
    ui->txtEdit->setPalette(plet);
}
// 设置下划线
void QWDialog::on_chkBoxUnder_clicked(bool checked)
{
    // 获取文本框的字体
    QFont font = ui->txtEdit->font();
    // 设置是否下划线
    font.setUnderline(checked);
    // 设置字体
    ui->txtEdit->setFont(font);
}
// 设置斜体
void QWDialog::on_chkBoxItalic_clicked(bool checked)
{
    // 获取文本框中的字体
    QFont font = ui->txtEdit->font();
    // 设置italic属性
    font.setItalic(checked);
    // 设置文本框中的字体
    ui->txtEdit->setFont(font);
}
// 设置粗体
void QWDialog::on_chkBoxBold_clicked(bool checked)
{
    // 获取文本框中的字体
    QFont font = ui->txtEdit->font();
    // 设置字体是否加粗
    font.setBold(checked);
    // 设置文本框的字体
    ui->txtEdit->setFont(font);
}
