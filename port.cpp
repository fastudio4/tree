#include "port.h"

Port::Port(QString name, QObject *parent)
    : QObject(parent)
{
    m_name = name;
    setObjectName(m_name);
    m_status = false;
    m_error.clear();
}

Port::~Port()
{

}

void Port::setPortName(const QString &name)
{
    m_name = name;
    setObjectName(m_name);
}

