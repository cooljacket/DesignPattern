#include "OperationAdd.h"

template<typename T>
OperationAdd<T>::OperationAdd(T _numberA, T _numberB)
: Operation<T>(_numberA, _numberB) {}


template<typename T>
T OperationAdd<T>::calc() const {
	return this->numberA + this->numberB;
}