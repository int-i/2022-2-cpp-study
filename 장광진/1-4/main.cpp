#include <iostream>
using namespace std;

constexpr int NumberOfMenber = 6;

void calculator(int[NumberOfMenber]);

int main()
{
	int chessPieces[NumberOfMenber] = {};
	for (int i = 0; i < NumberOfMenber; ++i)
		cin >> chessPieces[i];

	calculator(chessPieces);
	cout << endl;

	return 0;
}

void calculator(int c[NumberOfMenber]) { // ���Ǹ� ���� �Ű����� �̸��� �ٲ���ϴ�.
	cout << 1 - c[0] << " "
		<< 1 - c[1] << " "
		<< 2 - c[2] << " "
		<< 2 - c[3] << " "
		<< 2 - c[4] << " "
		<< 8 - c[5] << " ";
}