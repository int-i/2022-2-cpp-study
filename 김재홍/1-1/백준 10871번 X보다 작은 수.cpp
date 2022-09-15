#include <iostream>

using namespace std;

int main()
{
	int N, X;

	cin >> N;
	cin >> X;

	int number;

	for (int i = 0; i < N; i++)
	{
		cin >> number;
		
		if (number < X)
		{
			cout << number << endl;
		}
	}

	return 0;
}