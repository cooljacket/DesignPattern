#include "CashSuper.h"

double CashSuper::acceptCash(double money) {
	return money;
}

bool CashSuper::largerThanZero(double number) {
	if (number > -ERROR && number < ERROR)
		return false;
	return number > 0.0;
}