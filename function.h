#ifndef FUNCTION_H
#define FUNCTION_H

#include <QObject>

class Function : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString func READ functionReq WRITE setFunctionReq)
    Q_PROPERTY(uint registers READ registerReq WRITE setRegisterReq)
    Q_PROPERTY(uint count READ countReq WRITE setCountReq)
public:
    explicit Function(QString nameFunc, QObject *parent = nullptr);
    virtual ~Function();

    QString functionReq() {return m_func;}
    void setFunctionReq(QString f);
    uint registerReq() {return m_registers;}
    void setRegisterReq(uint reg) {m_registers = reg;}
    uint countReq() {return m_count;}
    void setCountReq(uint c) {m_count = c;}

private:
    QString m_func;
    uint m_registers;
    uint m_count;
};

#endif // FUNCTION_H
