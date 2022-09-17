#include <iostream>
using namespace std;

int main() {
	int N;
	float A[1000] = {};
	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	int M = A[0];
	for (int j = 0; j < N; j++) {
		if (M < A[j])
			M = A[j];
	}
	float addscore = 0;
	for (int k = 0; k < N; k++) {
		A[k]=(A[k]*100)/M;
		addscore =addscore+A[k] ;
	}
	cout<<addscore / N;
	return 0;
}