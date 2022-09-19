#include <iostream>
#include <array>
using namespace std;

int main() {
	int n = 0;
	int testscore = 0;
	int M = 0;
	double total = 0;
	double newtestscore = 0;
	cin >> n; // 시험 갯수 입력
	int *arr = new int [n]; // 배열 생성

	for (int i = 0; i < n; ++i) {
		cin >> testscore;
		arr[i] = testscore;
		total += testscore;
		if (testscore > M) {
			M = testscore;
		}
	}
	newtestscore = (total/M*100)/n;
	cout << newtestscore;


	delete[]arr;
}