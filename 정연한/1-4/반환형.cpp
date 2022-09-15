#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int func1(int a) {
	return a * 2;
}

void func2() {
	cout << "부작용만 존재하는 함수" << endl;
}

int main() {
	int i = 5;
	cout << func1(i) << endl;
	func2();
	return 0;
}

