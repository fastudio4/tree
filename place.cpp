#include "place.h"

Place::Place(QString name, QObject *parent)
    : QObject(parent)
{
    m_name = name;
    setObjectName(m_name);
}

Place::~Place()
{

}

void Place::setNamePlace(const QString &name)
{
    m_name = name;
    setObjectName(m_name);
}


