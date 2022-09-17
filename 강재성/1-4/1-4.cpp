#include <iostream>
using namespace std;

constexpr int NumberOfMember = 6;

void calculator(int[NumberOfMember]);

int main()
{
	int chesspiece[NumberOfMember] = { };
	for (int i = 0; i < NumberOfMember; i++)
	{
		cin >> chesspiece[i];

	}
	calculator(chesspiece);
	return 0;
}

void calculator(int chesspiece[NumberOfMember])