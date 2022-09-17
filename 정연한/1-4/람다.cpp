#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	auto y1 = [](int x) -> int { return x * 2 + 1; };
	auto y2 = [](int x) { return x * 2 + 1; };

	int result1 = y1(10);
	int result2 = y2(10);

	cout << result1 << endl;
	cout << result2 << endl;


	auto y = [](int x) { return x * 2 + 1; }(10);

	cout << y << endl;

	return 0;
}
