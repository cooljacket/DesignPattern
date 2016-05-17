#ifndef __CASH_CONTEXT_H
#define __CASH_CONTEXT_H

#include "CashSuper.h"
#include "CashNormal.h"
#include "CashDiscount.h"
#include "CashReturn.h"

class CashContext
{
private:
	CashSuper* super;

public:
	enum TYPE
	{
		NORMAL, DISCOUNT, RETURN
	};

	CashContext(TYPE type, const vector<double>& data);
	double GetResult(double money);
};

#endif