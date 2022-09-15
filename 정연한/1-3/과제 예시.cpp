#include <iostream>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

auto main() -> int {
	// ���� ������� ���� ǥ�� ����� ����ȭ ���� �ڵ�
	cin.tie(nullptr)->sync_with_stdio(false);

	// �Է� �κ��� ����� �ڵ� �ۼ��� ���� input �Լ�
	auto input{ [temp{ 0 }]() mutable { return cin >> temp, temp; } };

	const int N{ input() }; // ������ ũ��
	const int X{ input() }; // ������ �Ǵ� ��
	int inputValue{ }; // ���������� �Է¹��� ����

	for (int i{ }; i < N; ++i) {
		cin >> inputValue;
		if (inputValue < X)
			cout << inputValue << ' ';
	}

	return 0;
}
