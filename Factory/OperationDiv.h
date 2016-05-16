#ifndef __OPERATION_DIV_H
#define __OPERATION_DIV_H

#include "Operation.h"
#include <stdexcept>
using namespace std;

template<typename T>
class OperationDiv : public Operation<T>
{
public:
	OperationDiv(T _numberA, T _numberB);
	T calc() const;

private:
	static const double ERROR = 1e-15;
};

#include "OperationDiv.cpp"
#endif