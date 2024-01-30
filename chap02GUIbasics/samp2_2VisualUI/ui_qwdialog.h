/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QWDIALOG_H
#define UI_QWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QWDialog
{
public:
    // 垂直布局
    QVBoxLayout *verticalLayout;
    // 第二个组框
    QGroupBox *groupBox_2;
    // 水平布局2
    QHBoxLayout *horizontalLayout_2;
    // 复选框下划线
    QCheckBox *chkBoxUnder;
    // 复选框斜体
    QCheckBox *chkBoxItalic;
    // 复选框粗体
    QCheckBox *chkBoxBold;
    // 组框
    QGroupBox *groupBox;
    // 水平布局3
    QHBoxLayout *horizontalLayout_3;
    // 单选按钮黑色
    QRadioButton *rBtnBlack;
    // 单选按钮红色
    QRadioButton *rBtnRed;
    // 单选按钮蓝色
    QRadioButton *rBtnBlue;
    // 文本框
    QPlainTextEdit *txtEdit;
    // 水平布局
    QHBoxLayout *horizontalLayout;
    // 水平填充2
    QSpacerItem *horizontalSpacer_2;
    // 确定按钮
    QPushButton *btnOK;
    // 取消按钮
    QPushButton *btnCancel;
    // 水平填充
    QSpacerItem *horizontalSpacer;
    // 关闭按钮
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialog)
    {
        // 设置QWDialog的objectName，如果为空，则设置为QStringLiteral("QWDialog")
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        // 设置QWDialog的尺寸为396x262
        QWDialog->resize(396, 262);
        // 设置字体，字体为\345\256\213\344\275\223，点大小为11
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        QWDialog->setFont(font);
        // 创建QVBoxLayout，设置间距为6，内容边距为11
        verticalLayout = new QVBoxLayout(QWDialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(QWDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        // 创建一个复选框，用于控制是否下划线
        chkBoxUnder = new QCheckBox(groupBox_2);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));

        horizontalLayout_2->addWidget(chkBoxUnder);

        // 创建一个复选框，用于控制是否斜体
        chkBoxItalic = new QCheckBox(groupBox_2);
        chkBoxItalic->setObjectName(QStringLiteral("chkBoxItalic"));

        horizontalLayout_2->addWidget(chkBoxItalic);

        // 创建一个复选框，用于控制是否加粗
        chkBoxBold = new QCheckBox(groupBox_2);
        chkBoxBold->setObjectName(QStringLiteral("chkBoxBold"));

        horizontalLayout_2->addWidget(chkBoxBold);

        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(QWDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        // 创建一个单选按钮，设置为黑色
        rBtnBlack = new QRadioButton(groupBox);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));
        rBtnBlack->setChecked(true);

        horizontalLayout_3->addWidget(rBtnBlack);

        // 创建一个单选按钮，设置为红色
        rBtnRed = new QRadioButton(groupBox);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_3->addWidget(rBtnRed);

        // 创建一个单选按钮，设置为蓝色
        rBtnBlue = new QRadioButton(groupBox);
        rBtnBlue->setObjectName(QStringLiteral("rBtnBlue"));

        horizontalLayout_3->addWidget(rBtnBlue);

        verticalLayout->addWidget(groupBox);

        txtEdit = new QPlainTextEdit(QWDialog);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        QFont font1;
        font1.setPointSize(20);
        txtEdit->setFont(font1);

        verticalLayout->addWidget(txtEdit);

        // 创建水平布局
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        // 创建水平间距
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        // 创建确定按钮
        btnOK = new QPushButton(QWDialog);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout->addWidget(btnOK);

        // 创建取消按钮
        btnCancel = new QPushButton(QWDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        // 创建水平间距
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        // 创建关闭按钮
        btnClose = new QPushButton(QWDialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);

        verticalLayout->addLayout(horizontalLayout);

        retranslateUi(QWDialog);
        // 连接按钮
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));

        // 连接信号和槽
        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        // 设置窗口标题
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "Dialog by Designer", Q_NULLPTR));
        // 设置groupBox_2的标题
        groupBox_2->setTitle(QString());
        // 设置chkBoxUnder的文本
        chkBoxUnder->setText(QApplication::translate("QWDialog", "Underline", Q_NULLPTR));
        // 设置chkBoxItalic的文本
        chkBoxItalic->setText(QApplication::translate("QWDialog", "Italic", Q_NULLPTR));
        // 设置chkBoxBold的文本
        chkBoxBold->setText(QApplication::translate("QWDialog", "Bold", Q_NULLPTR));
        // 设置groupBox的标题
        groupBox->setTitle(QString());
        // 设置rBtnBlack的文本
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", Q_NULLPTR));
        // 设置rBtnRed的文本
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", Q_NULLPTR));
        // 设置rBtnBlue的文本
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", Q_NULLPTR));
        // 设置txtEdit的文本
        txtEdit->setPlainText(QApplication::translate("QWDialog", "Hello, world\n"
                                                                  "It is my demo.",
                                                      Q_NULLPTR));
        // 设置btnOK的文本
        btnOK->setText(QApplication::translate("QWDialog", "\347\241\256 \345\256\232", Q_NULLPTR));
        // 设置btnCancel的文本
        btnCancel->setText(QApplication::translate("QWDialog", "\345\217\226 \346\266\210", Q_NULLPTR));
        // 设置btnClose的文本
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200 \345\207\272", Q_NULLPTR));
    } // retranslateUi
};

namespace Ui
{
    class QWDialog : public Ui_QWDialog
    {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
