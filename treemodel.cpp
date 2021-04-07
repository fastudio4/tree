#include "treemodel.h"
#include <QDebug>

TreeModel::TreeModel(QObject *parent)
    : QAbstractItemModel(parent)
{
    root = new Data(this);
}

TreeModel::~TreeModel()
{
    delete root;
}

QModelIndex TreeModel::index(int row, int column, const QModelIndex &parent) const
{
    if(!hasIndex(row, column, parent)) return QModelIndex();
    Data *parentData;
    if(!parent.isValid()) parentData = root;
    else
    {
        parentData = static_cast<Data*>(parent.internalPointer());
    }
    Place *pl = parentData->place(row);
    if(pl) return createIndex(row, column, pl);
    return QModelIndex();

}

QModelIndex TreeModel::parent(const QModelIndex &index) const
{
    if(!index.isValid()) return QModelIndex();
    Place *pl = static_cast<Place *>(index.internalPointer());
    Data *parentData = static_cast<Data*>(pl->parent());
    if(parentData == root) return QModelIndex();
    return createIndex(parentData->row(), 0, parentData);
}

int TreeModel::rowCount(const QModelIndex &parent) const
{

    if (parent.column() > 0) return 0;
    Data *parentData;
    if (!parent.isValid()) parentData = root;
    else
    {
        parentData = static_cast<Data*>(parent.internalPointer());
    }
    return parentData->children().count();
}

int TreeModel::columnCount(const QModelIndex &parent) const
{

//    if (parent.isValid()) return 1;

    return 1;
}

QVariant TreeModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid()) return QVariant();
    if(role == Qt::DisplayRole)
    {
         Data *data = static_cast<Data*>(index.internalPointer());
         return data->place(index.row())->namePlace();
    }
    return QVariant();
}

void TreeModel::setDataModel(Data *data)
{   
    data->setParent(root);
}





