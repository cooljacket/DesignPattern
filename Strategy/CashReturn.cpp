#include "CashReturn.h"

#include <iostream>
using namespace std;

CashReturn::CashReturn(double full, double cut)
: _full(full), _cut(cut) {
	if (!largerThanZero(_full))
		logic_error("The full should be larger than zero.");
	if (!largerThanZero(_cut))
		logic_error("The cut should be larger than zero.");
}


double CashReturn::acceptCash(double money) {
	return money - int(money / _full) * _cut;
}