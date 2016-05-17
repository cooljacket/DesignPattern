#include "CashDiscount.h"


CashDiscount::CashDiscount(double discount)
: _discount(discount) {
	if (_discount < 0.0)
		logic_error("The discount shouldn't less than zero.");
}


double CashDiscount::acceptCash(double money) {
	return money * _discount;
}