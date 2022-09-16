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
}

void calculator(int chesspiece[NumberOfMember])
{
	int k = 1, Q = 1, L = 2, B = 2, K = 2, P = 8;
	cout << k - chesspiece[0]<<' ' << Q - chesspiece[1] << ' ' << L - chesspiece[2] << ' '
		<< B - chesspiece[3] << ' ' << K - chesspiece[4] << ' ' << P - chesspiece[5] << endl;
}