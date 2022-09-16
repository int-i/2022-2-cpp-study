#include <iostream>
using namespace std;

const int NUMBER = 6;

int main() {
	int chess[NUMBER] = { 1,1,2,2,2,8 };
	int mychess[NUMBER];

	for (int i = 0; i < NUMBER; i++) {
		cin >> mychess[i];
		cout << chess[i] - mychess[i]<<" ";
	}

	return 0;
}