#include <iostream>
using namespace std;

constexpr int NumberOfMember = 6;

void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = { };
	for (int i = 0; i < NumberOfMember; i++) {
		cin >> chessPieces[i];
	}
	calculator(chessPieces);

	return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
	int king = 1;
	int queen = 1;
	int rook = 2;
	int bishop = 2;
	int knight = 2;
	int pawn = 8;

}