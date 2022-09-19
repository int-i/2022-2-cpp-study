#include <iostream>
using namespace std;

int main() {
	int N;
	int M=0;
	float allof = 0;
	float allofaverage=0;
	cin >> N;
	float *arrayy = new float[N];

	for (int i=0; i < N; i++) {
		cin >> arrayy[i];
		if (arrayy[i] > M)
			M = arrayy[i];
	}

	for (int j=0; j < N; j++) {
		arrayy[j] = arrayy[j] / M * 100;
	}

	for (int k=0; k < N; k++) {
		allof = allof + arrayy[k];
	}

	allofaverage = allof / N;
	cout << allofaverage;

	return 0;
}