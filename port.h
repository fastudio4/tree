#ifndef PORT_H
#define PORT_H

#include <QObject>

class Port : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ portName WRITE setPortName)
public:
    explicit Port(QString name, QObject *parent = nullptr);
    virtual ~Port();

    QString portName() { return m_name; }
    void setPortName(const QString &name);

private:
    QString m_name;
};

#endif // PORT_H
