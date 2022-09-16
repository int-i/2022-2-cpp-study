#include <iostream>
#include <vector>
using namespace std;

void calculator(int scores[], int N);

int main() {
	int scores[1000];
	int N;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> scores[i];
	}

	calculator(scores, N);
	
	return 0;
}

void calculator(int scores[], int N) {
	int M = scores[0];
	double total = scores[0];

	for (int i = 1; i < N; i++) {
		if (M < scores[i])
			M = scores[i];
		total += scores[i];
	}
	
	cout << (total / M * 100) / N << endl;
}