#include "device.h"

Device::Device(QString name, uint id, QObject *parent)
    : QObject(parent)
{
    m_idDev = id;
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

