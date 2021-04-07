#ifndef PLACE_H
#define PLACE_H

#include <QObject>
//#include "port.h"
//#include "device.h"
//#include "function.h"

class Place : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString name READ namePlace WRITE setNamePlace)
public:
    explicit Place(QString name, QObject *parent = nullptr);
    virtual ~Place();
    QString namePlace() {return m_name;}
    void setNamePlace(const QString &name);

private:
    QString m_name;
};

#endif // PLACE_H
