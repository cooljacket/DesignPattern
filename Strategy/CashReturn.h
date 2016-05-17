#ifndef __CASH_RETURN_H
#define __CASH_RETURN_H

#include "CashSuper.h"

class CashReturn : public CashSuper
{
private:
	double _full, _cut;

public:
	CashReturn(double full, double cut);
	double acceptCash(double money);
};

#endif