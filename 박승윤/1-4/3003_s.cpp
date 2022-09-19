#include <iostream>
using namespace std;

constexpr int NumberOfMember = 6; 

void calculator(int[NumberOfMember]);

int main()
{
	int chessPieces[NumberOfMember] = {};
	for (int i = 0; i < NumberOfMember; ++i)
		cin >> chessPieces[i];


	calculator(chessPieces);

	return 0;
}

void calculator(int chessPieces[NumberOfMember])
{
	int count = 1;

	for (int j = 0; j < NumberOfMember; ++j) {
		if (count == 1 or count == 2) {
			if (chessPieces[j] > 0 or chessPieces[j] < 0) {
				chessPieces[j] = (-chessPieces[j]) + 1;
			}
			else if (chessPieces[j] == 0) {
				chessPieces[j] += 1;
			}
		}
		else if (count == 3 or count == 4 or count == 5) {
			if (chessPieces[j] > 0 or chessPieces[j] < 0) {
				chessPieces[j] = (-chessPieces[j]) + 2;
			}
			else if (chessPieces[j] == 0) {	
				chessPieces[j] += 2;
			}
		}
		else if (count == 6)
			if (chessPieces[j] > 0 or chessPieces[j] < 0) {
				chessPieces[j] = (-chessPieces[j]) + 8;
			}
			else if (chessPieces[j] == 0) {
				chessPieces[j] += 8;
			}
		count++;
	}
	
	for (int k = 0; k < NumberOfMember; ++k) {
		cout << chessPieces[k] << " ";
	}

}