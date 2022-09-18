#include <iostream>
using namespace std;

constexpr int NumberOfMember = 6;

void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = { };
	for (int i = 0; i < NumberOfMember; i++)
		cin >> chessPieces[i];

	calculator(chessPieces);

	return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
	for (int i = 0; i < NumberOfMember; i++) {
		if (i < 2) {
			cout << 1 - chessPieces[i] << " ";
		}
		else if (i < 5) {
			cout << 2 - chessPieces[i] << " ";
		}
		else {
			cout << 8 - chessPieces[i] << endl;
		}
	}
}