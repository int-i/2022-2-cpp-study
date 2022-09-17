#include <iostream>
using namespace std;

int main() {
	int n;
	int x;
	int array[10000];

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	for (int j = 0; j < n; j++) {
		if (array[j] < x)
			cout << array[j] << endl;
	}

	return 0;
}