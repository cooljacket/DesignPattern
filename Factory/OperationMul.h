#ifndef __OPERATION_MUL_H
#define __OPERATION_MUL_H

#include "Operation.h"

template<typename T>
class OperationMul : public Operation<T>
{
public:
	OperationMul(T _numberA, T _numberB);
	T calc() const;
};

#include "OperationMul.cpp"
#endif