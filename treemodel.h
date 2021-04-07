#ifndef TREEMODEL_H
#define TREEMODEL_H

#include <QAbstractItemModel>
#include <QObject>

class TreeModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    explicit TreeModel(QObject *parent = nullptr);

    void setColumns(QStringList cols);
    void addItem(QObject *item, const QModelIndex &parentIdx);
    virtual ~TreeModel();


    // Basic functionality:
    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &child) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    QObject *_rootItem;
    QStringList _columns;
    QObject *objByIndex(const QModelIndex &index) const;

};

#endif // TREEMODEL_H
