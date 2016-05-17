#include "CashContext.h"


CashContext::CashContext(TYPE type, const vector<double>& args) {
	switch (type) {
		case NORMAL:
			super = new CashNormal();
			break;
		case DISCOUNT:
			if (args.empty())
				logic_error("There should be an argument for the discount setting.");
			super = new CashDiscount(args[0]);
			break;
		case RETURN:
			if (args.size() < 2)
				logic_error("There should be two arguments for the money-return setting.");
			super = new CashReturn(args[0], args[1]);
			break;
		default:
			// some more error msg would be better
			break;
	}
}


double CashContext::GetResult(double money) {
	return super->acceptCash(money);
}