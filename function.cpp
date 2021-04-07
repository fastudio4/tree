#include "function.h"

Function::Function(QString nameFunc, QObject *parent)
    : QObject(parent)
{
    m_func = nameFunc;
    setObjectName(m_func);
}

Function::~Function()
{

}

void Function::setFunctionReq(QString f)
{
    m_func = f;
    setObjectName(m_func);
}
