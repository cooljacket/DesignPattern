#include "OperationMul.h"

template<typename T>
OperationMul<T>::OperationMul(T _numberA, T _numberB)
: Operation<T>(_numberA, _numberB) {}


template<typename T>
T OperationMul<T>::calc() const {
	return this->numberA * this->numberB;
}