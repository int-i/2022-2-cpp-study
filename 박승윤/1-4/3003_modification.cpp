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
	int chess_m[NumberOfMember] = { 1, 1, 2, 2, 2, 8 };

	for (int j = 0; j < NumberOfMember; ++j) {
		chessPieces[j] = chess_m[j] - chessPieces[j];
		cout << chessPieces[j] << " ";
	}

}