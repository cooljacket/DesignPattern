#include "OperationSub.h"

template<typename T>
OperationSub<T>::OperationSub(T _numberA, T _numberB)
: Operation<T>(_numberA, _numberB) {}


template<typename T>
T OperationSub<T>::calc() const {
	return this->numberA - this->numberB;
}