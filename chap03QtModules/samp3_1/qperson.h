#ifndef QPERSON_H
#define QPERSON_H

#include <QObject>

class QPerson : public QObject
{
    Q_OBJECT

    // 声明一个类信息，用于指定作者
    Q_CLASSINFO("author", "Wang")
    // 声明一个类信息，用于指定公司
    Q_CLASSINFO("company", "UPC")
    // 声明一个类信息，用于指定版本号
    Q_CLASSINFO("version", "1.0.0")

    // 声明一个属性，用于读取和设置年龄
    Q_PROPERTY(int age READ age WRITE setAge NOTIFY ageChanged)
    // 声明一个属性，用于读取和设置名字
    Q_PROPERTY(QString name MEMBER m_name)
    // 声明一个属性，用于读取和设置分数
    Q_PROPERTY(int score MEMBER m_score)
private:
    // 定义一个变量m_age，初始值为10
    int m_age = 10;
    // 定义一个变量m_name，初始值为空字符串
    QString m_name;
    // 定义一个变量m_score，初始值为79
    int m_score = 79;

public:
    // 构造函数，接收一个字符串参数fName，初始化m_name为fName，m_age为10，m_score为79
    explicit QPerson(QString fName, QObject *parent = nullptr);

    // 返回m_age的值
    int age();
    // 设置m_age的值，参数value
    void setAge(int value);

    // 将m_age加1，并发出ageChanged信号，参数value为m_age加1后的值
    void incAge();
signals:
    // 当m_age改变时发出，参数value为m_age改变后的值
    void ageChanged(int value);

public slots:
};

#endif // QPERSON_H
