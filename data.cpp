#include "data.h"


Data::Data(QObject *parent)
    : QObject(parent)
{
    parentData = static_cast<Data*>(parent);
}

Data::~Data()
{

}

int Data::row()
{
    if(parentData) return parentData->children().indexOf(const_cast<Data*>(this));
    return 0;
}

void Data::addPlace(Place *pl)
{
    pl->setParent(this);
}

Place *Data::place(int index)
{
    if(index < 0 || index >= children().count()) return nullptr;
    Place *pl = static_cast<Place* >(children().at(index));
    return pl;
}








