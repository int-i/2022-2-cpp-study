#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

auto main() -> int {
	// 빠른 입출력을 위한 표준 입출력 동기화 해제 코드
	cin.tie(nullptr)->sync_with_stdio(false);

	// 입력 부분의 깔끔한 코드 작성을 위한 input 함수
	auto input{ [temp{ 0 }]() mutable { return cin >> temp, temp; } };

	const int N{ input() }; // 수열의 크기
	const int X{ input() }; // 기준이 되는 수
	int inputValue{ }; // 순차적으로 입력받을 정수

	for (int i{ }; i < N; ++i) {
		cin >> inputValue;
		if (inputValue < X)
			cout << inputValue << ' ';
	}

	return 0;
}
