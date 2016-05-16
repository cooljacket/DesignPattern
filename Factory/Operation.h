#ifndef __OPERATION_H
#define __OPERATION_H

template<typename T>
class Operation
{
protected:
	T numberA, numberB;

	Operation(T _numberA, T _numberB)
	: numberA(_numberA), numberB(_numberB) {}

public:
	virtual T calc() const = 0;
};

#endif