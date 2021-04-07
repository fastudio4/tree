#include "device.h"

Device::Device(QString name, uint id, QObject *parent)
    : QObject(parent)
{
    idDev = id;
    m_name = name;
    setObjectName(m_name);
}

Device::~Device()
{

}

void Device::setNameDev(QString name)
{
    m_name = name;
    setObjectName(m_name);
}

