#ifndef __CASH_DISCOUNT_H
#define __CASH_DISCOUNT_H

#include "CashSuper.h"

class CashDiscount : public CashSuper
{
private:
	double _discount;

public:
	CashDiscount(double discount);
	double acceptCash(double money);
};

#endif