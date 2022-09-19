#include <iostream>
#include <typeinfo>
using std::cin;
using std::cout;
using std::endl;


int main() {
	int a = 10;
	int* pa = &a;

	cout << typeid(a).name() << endl;
	cout << typeid(&a).name() << endl;
	cout << typeid(pa).name() << endl;
	return 0;
}
