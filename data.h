#ifndef DATA_H
#define DATA_H

#include <QObject>
#include "place.h"



class Data : public QObject
{
    Q_OBJECT

public:
    explicit Data(QObject *parent = nullptr);
    virtual ~Data();
    int row();
    void addPlace(Place *pl);
    Place *place(int index);
private:
    Data *parentData;




private:



};

#endif // DATA_H
