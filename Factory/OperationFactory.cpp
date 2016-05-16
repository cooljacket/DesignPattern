#include "OperationFactory.h"

template<typename T>
Operation<T>* OperationFactory<T>::createOperation(T numberA, T numberB, char op) {
	switch (op) {
		case '+':
			return new OperationAdd<T>(numberA, numberB);
		case '-':
			return new OperationSub<T>(numberA, numberB);
		case '*':
			return new OperationMul<T>(numberA, numberB);
		case '/':
			return new OperationDiv<T>(numberA, numberB);
		default:
			string msg("No such operation ");
			msg += op;
			throw logic_error(msg.data());
			break;
	}
}