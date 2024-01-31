#include "qwdlgmanual.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

void QWDlgManual::iniUI()
{
    // 创建 Underline, Italic, Bold三个CheckBox，并水平布局
    chkBoxUnder = new QCheckBox(tr("Underline"));
    chkBoxItalic = new QCheckBox(tr("Italic"));
    chkBoxBold = new QCheckBox(tr("Bold"));

    QHBoxLayout *HLay1 = new QHBoxLayout;
    HLay1->addWidget(chkBoxUnder);
    HLay1->addWidget(chkBoxItalic);
    HLay1->addWidget(chkBoxBold);

    // 创建 Black, Red, Blue三个RadioButton，并水平布局
    rBtnBlack = new QRadioButton(tr("Black"));
    rBtnBlack->setChecked(true); // 缺省被选中
    rBtnRed = new QRadioButton(tr("Red"));
    rBtnBlue = new QRadioButton(tr("Blue"));

    QHBoxLayout *HLay2 = new QHBoxLayout;
    HLay2->addWidget(rBtnBlack);
    HLay2->addWidget(rBtnRed);
    HLay2->addWidget(rBtnBlue);

    // 创建 确定, 取消, 退出 三个 QPushButton, 并水平布局
    btnOK = new QPushButton(tr("确定"));
    btnCancel = new QPushButton(tr("取消"));
    btnClose = new QPushButton(tr("退出"));

    QHBoxLayout *HLay3 = new QHBoxLayout;
    HLay3->addStretch();
    HLay3->addWidget(btnOK);
    HLay3->addWidget(btnCancel);
    HLay3->addStretch();
    HLay3->addWidget(btnClose);

    // 创建 文本框,并设置初始字体
    txtEdit = new QPlainTextEdit;
    txtEdit->setPlainText("Hello world\n\nIt is my demo");

    QFont font = txtEdit->font(); // 获取字体
    font.setPointSize(20);        // 修改字体大小为20
    txtEdit->setFont(font);       // 设置字体

    // 创建 垂直布局，并设置为主布局
    QVBoxLayout *VLay = new QVBoxLayout;
    VLay->addLayout(HLay1);   // 添加字体类型组
    VLay->addLayout(HLay2);   // 添加字体颜色组
    VLay->addWidget(txtEdit); // 添加TextEdit
    VLay->addLayout(HLay3);   // 添加按键组

    setLayout(VLay); // 设置为窗体的主布局
}

void QWDlgManual::iniSignalSlots()
{
    // 三个颜色  QRadioButton的clicked()事件与setTextFontColor()槽函数关联
    connect(rBtnBlue, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(rBtnRed, SIGNAL(clicked()), this, SLOT(setTextFontColor()));
    connect(rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextFontColor()));

    // 三个字体设置的  QCheckBox 的clicked(bool)事件与 相应的槽函数关联
    connect(chkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxUnder(bool)));
    connect(chkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxItalic(bool)));
    connect(chkBoxBold, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxBold(bool)));

    // 三个按键与窗体的槽函数关联
    connect(btnOK, SIGNAL(clicked()), this, SLOT(accept()));
    connect(btnCancel, SIGNAL(clicked()), this, SLOT(reject()));
    connect(btnClose, SIGNAL(clicked()), this, SLOT(close()));
}

// 当复选框被选中时，设置文本框的字体下划线状态
void QWDlgManual::on_chkBoxUnder(bool checked)
{
    // 获取文本框的字体
    QFont font = txtEdit->font();
    // 根据复选框的状态设置文本框的字体下划线状态
    font.setUnderline(checked);
    // 设置文本框的字体
    txtEdit->setFont(font);
}

void QWDlgManual::on_chkBoxItalic(bool checked)
{
    // 获取文本框中的字体
    QFont font = txtEdit->font();
    // 设置字体斜体属性
    font.setItalic(checked);
    // 设置新的字体
    txtEdit->setFont(font);
}

// 当复选框被选中时，设置文本框的字体为粗体
void QWDlgManual::on_chkBoxBold(bool checked)
{
    // 获取文本框中的字体
    QFont font = txtEdit->font();
    // 设置字体是否加粗
    font.setBold(checked);
    // 设置文本框中的字体
    txtEdit->setFont(font);
}

void QWDlgManual::setTextFontColor()
{
    // 获取文本框的调色板
    QPalette plet = txtEdit->palette();
    // 如果蓝色复选框被选中
    if (rBtnBlue->isChecked())
        // 设置文本框的文本颜色为蓝色
        plet.setColor(QPalette::Text, Qt::blue);
    // 如果红色复选框被选中
    else if (rBtnRed->isChecked())
        // 设置文本框的文本颜色为红色
        plet.setColor(QPalette::Text, Qt::red);
    // 如果黑色复选框被选中
    else if (rBtnBlack->isChecked())
        // 设置文本框的文本颜色为黑色
        plet.setColor(QPalette::Text, Qt::black);
    // 如果未选中任何复选框
    else
        // 设置文本框的文本颜色为黑色
        plet.setColor(QPalette::Text, Qt::black);

    // 设置文本框的调色板
    txtEdit->setPalette(plet);
}

QWDlgManual::QWDlgManual(QWidget *parent)
    : QDialog(parent)
{
    iniUI();                                 // 界面创建与布局
    iniSignalSlots();                        // 信号与槽的关联
    setWindowTitle("Form created manually"); // 设置窗体标题
}

QWDlgManual::~QWDlgManual()
{
}
