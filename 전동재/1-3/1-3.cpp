#include <iostream>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
	int num[1000];
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (num[i] < X)
		{
			cout << num[i] << " ";
		}
	}
}