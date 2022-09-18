#include <iostream>

using namespace std;

int main() {
	int number, sum = 0;
	int max = 0;
	int array[1000];

	cin >> number;

	for (int i = 0; i < number; i++) {
		cin >> array[i];
		if (array[i] > max) {
			max = array[i];
		}
		sum += array[i];
	}
	sum = (sum / max * 100) / number;

	cout << sum;

	return 0;
}

