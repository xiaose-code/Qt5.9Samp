/********************************************************************************
** Form generated from reading UI file 'qwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
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
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *chkBoxUnder;
    QCheckBox *chkBoxItalic;
    QCheckBox *chkBoxBold;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rBtnBlack;
    QRadioButton *rBtnRed;
    QRadioButton *rBtnBlue;
    QPlainTextEdit *txtEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *QWDialog)
    {
        if (QWDialog->objectName().isEmpty())
            QWDialog->setObjectName(QStringLiteral("QWDialog"));
        QWDialog->resize(322, 223);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(11);
        QWDialog->setFont(font);
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
        chkBoxUnder = new QCheckBox(groupBox_2);
        chkBoxUnder->setObjectName(QStringLiteral("chkBoxUnder"));

        horizontalLayout_2->addWidget(chkBoxUnder);

        chkBoxItalic = new QCheckBox(groupBox_2);
        chkBoxItalic->setObjectName(QStringLiteral("chkBoxItalic"));

        horizontalLayout_2->addWidget(chkBoxItalic);

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
        rBtnBlack = new QRadioButton(groupBox);
        rBtnBlack->setObjectName(QStringLiteral("rBtnBlack"));
        rBtnBlack->setChecked(true);

        horizontalLayout_3->addWidget(rBtnBlack);

        rBtnRed = new QRadioButton(groupBox);
        rBtnRed->setObjectName(QStringLiteral("rBtnRed"));

        horizontalLayout_3->addWidget(rBtnRed);

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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btnOK = new QPushButton(QWDialog);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnCancel = new QPushButton(QWDialog);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout->addWidget(btnCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(QWDialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QWDialog);
        QObject::connect(btnOK, SIGNAL(clicked()), QWDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), QWDialog, SLOT(reject()));
        QObject::connect(btnClose, SIGNAL(clicked()), QWDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(QWDialog);
    } // setupUi

    void retranslateUi(QDialog *QWDialog)
    {
        QWDialog->setWindowTitle(QApplication::translate("QWDialog", "Dialog by Designer", 0));
        groupBox_2->setTitle(QString());
        chkBoxUnder->setText(QApplication::translate("QWDialog", "Underline", 0));
        chkBoxItalic->setText(QApplication::translate("QWDialog", "Italic", 0));
        chkBoxBold->setText(QApplication::translate("QWDialog", "Bold", 0));
        groupBox->setTitle(QString());
        rBtnBlack->setText(QApplication::translate("QWDialog", "Black", 0));
        rBtnRed->setText(QApplication::translate("QWDialog", "Red", 0));
        rBtnBlue->setText(QApplication::translate("QWDialog", "Blue", 0));
        txtEdit->setPlainText(QApplication::translate("QWDialog", "Hello, world\n"
"It is my demo.", 0));
        btnOK->setText(QApplication::translate("QWDialog", "\347\241\256 \345\256\232", 0));
        btnCancel->setText(QApplication::translate("QWDialog", "\345\217\226 \346\266\210", 0));
        btnClose->setText(QApplication::translate("QWDialog", "\351\200\200 \345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class QWDialog: public Ui_QWDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QWDIALOG_H
