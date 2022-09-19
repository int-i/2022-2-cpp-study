#include <iostream>
using namespace std;

int main() {
	int a[1000] = {};
	int N = 0, M = 0;
	float avg = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (M < a[i])
		{
			M = a[i];
		}
	}

	for (int i = 0; i < N; i++)
	{
		a[i] = (a[i]*100)/M;
		avg = avg + a[i];
	}
	
	cout << avg / N;
	cout << endl;
	
	return 0;
}