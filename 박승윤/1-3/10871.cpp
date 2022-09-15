#include <iostream>
using namespace std;

int main()
{	

	int N, X;
	cin >> N >> X;

	int inputValue = 0;

	for (int i = 1; i <= N; i++) {
		cin >> inputValue;
		if (inputValue < X) {
			cout << inputValue << " ";
		}
	}

	return 0;
}