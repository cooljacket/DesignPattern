#ifndef __OPERATION_ADD_H
#define __OPERATION_ADD_H

#include "Operation.h"

template<typename T>
class OperationAdd : public Operation<T>
{
public:
	OperationAdd(T _numberA, T _numberB);
	T calc() const;
};

#include "OperationAdd.cpp"
#endif