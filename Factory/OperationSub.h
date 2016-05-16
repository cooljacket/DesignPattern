#ifndef __OPERATION_SUB_H
#define __OPERATION_SUB_H

#include "Operation.h"

template<typename T>
class OperationSub : public Operation<T>
{
public:
	OperationSub(T _numberA, T _numberB);
	T calc() const;
};

#include "OperationSub.cpp"
#endif