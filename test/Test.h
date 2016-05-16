#ifndef __TEST_H
#define __TEST_H

#include <iostream>
using namespace std;

template<typename T>
class Test
{
public:
	Test();
	void say();
};

#include "Test.cpp"
#endif