#include <iostream>
using namespace std;

int main() {
	int N;
	int X;
	cin >> N >> X;
	
	int array[10000];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < N; i++) {
		if (array[i] < X) {
			cout << array[i] << endl;
		}
	}
}