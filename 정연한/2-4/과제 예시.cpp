#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using std::ostream;

// std�� �ִ� string���� ���� ����, ���� ���� String Ŭ����
class String {
public:
	String(const char* str) : length{ } {
		for (int i{ }; str[i] != '\0'; ++i)
			++length;
		++length;

		value = new char[length] {};

		for (int i{ }; i < length; ++i)
			value[i] = str[i];
	}

	auto& getString() {
		return value;
	}

	auto operator+(String str) {
		// length - 1 �κп��� -1�� ���ִ� ����:
		// �⺻������ ���ڿ��� ������ \0�� �ֱ� ������,
		// ���ڿ��� ��ĥ ������ �ش� ���ڸ� ���� ������� �ϱ� ����.
		char* temp{ new char[length - 1 + str.length] };

		for (int i{ }; i < length - 1; ++i)
			temp[i] = value[i];

		for (int i{ }; i < str.length; ++i)
			temp[i + length - 1] = str.value[i];

		return temp;
	}

	friend auto& operator<<(ostream& out, String str) {
		return out << str.length;
	}

private:
	char* value;
	int length;
};



int main() {
	String str{ "�ȳ�" };
	String str2{ "�ϼ���" };

	cout << str + str2 << endl;
	return 0;
}


