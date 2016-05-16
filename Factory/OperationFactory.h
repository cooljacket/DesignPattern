#ifndef __OPERATION_FACTORY_H
#define __OPERATION_FACTORY_H

#include "Operation.h"
#include "OperationAdd.h"
#include "OperationSub.h"
#include "OperationMul.h"
#include "OperationDiv.h"

template<typename T>
class OperationFactory
{
public:
	static Operation<T>* createOperation(T numberA, T numberB, char op);
};

#include "OperationFactory.cpp"
#endif