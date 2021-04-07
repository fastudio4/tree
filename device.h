#ifndef DEVICE_H
#define DEVICE_H

#include <QObject>

class Device : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ nameDev WRITE setNameDev)
    Q_PROPERTY(uint m_idDev READ idDevice WRITE setId)
public:
    explicit Device(QString name, uint id,  QObject *parent = nullptr);
    virtual ~Device();
    QString nameDev() {return m_name;}
    void setNameDev(QString name);
    uint idDevice() {return m_idDev;}
    void setId(uint id) {m_idDev = id;}

private:
    QString m_name;
    uint m_idDev;
};

#endif // DEVICE_H
