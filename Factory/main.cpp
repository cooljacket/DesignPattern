#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "OperationFactory.h"
using namespace std;


int main(int argc, char* argv[]) {
	int numberA, numberB;
	char op;
	cout << "Please enter a formula: ";
	cin >> numberA >> op >> numberB;

	Operation<int>* operation = OperationFactory<int>::createOperation(numberA, numberB, op);
	cout << numberA << op << numberB << '=' << operation->calc() << endl;

	return 0;
}