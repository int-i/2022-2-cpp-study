#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;

using std::sort;


int main() {
	// 학번을 받을 배열
	int SN[3] = { };

	// 학번 순차적으로 입력
	for (int i = 0; i < sizeof(SN) / sizeof(int); ++i)
		cin >> SN[i];
	
	// 배열의 이름은 배열의 첫번째 요소의 주소값과 같다.
	// 즉, SN == &SN[0]
	// 따라서 아래는 &SN[0], &SN[3]과 같다.
	sort(SN, SN + 3);

	cout << endl << "정렬 결과: ";
	for (int i = 0; i < sizeof(SN) / sizeof(int); ++i)
		cout << SN[i] << ' ';

	return 0;
}
