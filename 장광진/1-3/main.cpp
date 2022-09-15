#include <iostream>
using namespace std;

int main()
{
	int N = 0, X = 0;
	cin >> N >> X;
	int A[10000];

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		if (A[i] < X)
		{
			cout << A[i] << " ";
		}
	}

	cout << endl;

	return 0;
}