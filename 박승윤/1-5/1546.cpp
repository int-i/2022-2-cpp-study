#include <iostream>
using namespace std;

int main()
{
	int N;
	int max = 0;
	float sum = 0;
	float score[1000] = {};
	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (score[i] > max) {
			max = score[i];
		}
	}

	for (int j = 0; j < N; j++) {
		score[j] = score[j] / max * 100;
		sum += score[j];
	}

	float new_avg = sum / N;
	
	cout << new_avg << endl;


	return 0;
}