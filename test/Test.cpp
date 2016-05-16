// #include "Test.h"
// #include <iostream>
// using namespace std;


// Test::Test() {
// 	cout << "Build..." << endl;
// }

// void Test::say() {
// 	cout << "haha" << endl;
// }

// #include "Test.h"
#include <iostream>
using namespace std;

template<typename T>
Test<T>::Test() {
	cout << "Build..." << endl;
}

template<typename T>
void Test<T>::say() {
	cout << "haha" << endl;
}