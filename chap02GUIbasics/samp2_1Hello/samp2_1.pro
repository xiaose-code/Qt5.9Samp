#-------------------------------------------------
#
# Project created by QtCreator 2016-11-12T00:45:36
#
#-------------------------------------------------

QT       += core gui    #包含的模块

# 大于QT4版本才包含 widget 模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = samp2_1    # 应用程序名 生成的.exe程序名称
TEMPLATE = app      # 模块类型 应用程序模块

# 定义编译选项。 QT_DEPFRECATED_WARNINGS
# 表示当QT的某些功能被标记为过时的，那么编译器就会发出警告
DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h \
    ui_widget.h

FORMS    += widget.ui
