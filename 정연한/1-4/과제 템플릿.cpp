#include <iostream>
using std::cin;
using std::cout;
using std::endl;

constexpr int NumberOfMember = 6;

// ��ȯ���� ����, int �迭�� ���ڷ� �޴� �Լ�
// �迭�� ���� ������ ���� ����
// https://boycoding.tistory.com/193
void calculator(int[NumberOfMember]);

int main() {
	int chessPieces[NumberOfMember] = { };
	for (int i = 0; i < NumberOfMember; ++i)
		cin >> chessPieces[i];

	calculator(chessPieces);

	return 0;
}

void calculator(int chessPieces[NumberOfMember]) {
	// TODO: ���⿡ ���� Ǯ�� �ۼ�
}

