#include <iostream>
#include "CashContext.h"
using namespace std;


int main() {
	{
		// 正常销售
		cout << "NORMAL" << endl;
		vector<double> args;
		CashContext context(CashContext::NORMAL, args);
		cout << context.GetResult(100.0) << endl;
	}

	{
		// 打折销售，例子为打8折
		cout << "\nDISCOUNT" << endl;
		vector<double> args(1, 0.8);
		CashContext context(CashContext::DISCOUNT, args);
		cout << context.GetResult(100.0) << endl;
	}

	{
		// 满减，例子为“满300减100”
		cout << "\nReturn..." << endl;
		vector<double> args;
		args.push_back(300);
		args.push_back(100);
		CashContext context(CashContext::RETURN, args);
		cout << context.GetResult(100.0) << endl;
		cout << context.GetResult(500.0) << endl;
		cout << context.GetResult(666.0) << endl;
	}

	return 0;
}