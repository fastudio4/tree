#ifndef DEVICE_H
#define DEVICE_H

#include <QObject>

class Device : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ nameDev WRITE setNameDev)
    Q_PROPERTY(uint m_idDev READ idDevice WRITE setId)
    Q_PROPERTY(bool status READ status WRITE setStatus)
    Q_PROPERTY(QString error READ error WRITE setError)
public:
    explicit Device(QString name, uint id,  QObject *parent = nullptr);

    QString nameDev() {return m_name;}
    void setNameDev(QString name);

    uint idDevice() {return m_idDev;}
    void setId(uint id) {m_idDev = id;}

    QString error() { return m_error; }
    void setError(QString error) {m_error = error;}

    bool status() {return m_status;}
    void setStatus(bool status) {m_status = status;}

    virtual ~Device();

private:
    QString m_name;
    uint m_idDev;
    QString m_error;
    bool m_status;
};

#endif // DEVICE_H
