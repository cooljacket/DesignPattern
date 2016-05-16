#include "OperationDiv.h"

template<typename T>
OperationDiv<T>::OperationDiv(T _numberA, T _numberB)
: Operation<T>(_numberA, _numberB) {}


template<typename T>
T OperationDiv<T>::calc() const {
	if (this->numberB > -ERROR && this->numberB < ERROR)
		throw logic_error("Zero can't be divided.");
	return this->numberA / this->numberB;
}