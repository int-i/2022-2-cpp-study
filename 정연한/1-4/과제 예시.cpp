#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using std::string;

string classification(string[]);

int main() {
	string members[10000];
	int N = 0; cin >> N;

	for (int i = 0; i < N; ++i)
		cin >> members[i];

	classification(members);

	return 0;
}

string classification(string members[]) {
	// TODO: ���⿡ ���� Ŭ�� ���� Ǯ�� �ۼ�
}

