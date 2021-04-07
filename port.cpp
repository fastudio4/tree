#include "port.h"

Port::Port(QString name, QObject *parent)
    : QObject(parent)
{
    m_name = name;
    setObjectName(m_name);
}

Port::~Port()
{

}

void Port::setPortName(const QString &name)
{
    m_name = name;
    setObjectName(m_name);
}

