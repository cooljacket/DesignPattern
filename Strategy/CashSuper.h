#ifndef __CASH_SUPER_H
#define __CASH_SUPER_H

#include <stdexcept>
#include <vector>
using namespace std;

class CashSuper
{
public:
	/*
	Args: original price
	Return: the money should pay actually
	*/
	virtual double acceptCash(double money);

protected:
	bool largerThanZero(double number);

private:
	static const double ERROR = 1e-15;
};

#endif