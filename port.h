#ifndef PORT_H
#define PORT_H

#include <QObject>

class Port : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ portName WRITE setPortName)
    Q_PROPERTY(bool status READ status WRITE setStatus)
    Q_PROPERTY(QString error READ error WRITE setError)
public:
    explicit Port(QString name, QObject *parent = nullptr);

    QString portName() { return m_name; }
    void setPortName(const QString &name);

    bool status() { return m_status; }
    void setStatus(bool status) { m_status = status; }

    QString error() { return m_error; }
    void setError(QString error) { m_error = error; }

    virtual ~Port();
private:
    QString m_name;
    bool m_status;
    QString m_error;
};

#endif // PORT_H
