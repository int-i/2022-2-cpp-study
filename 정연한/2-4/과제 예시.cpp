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

		value = new char[length] { };

		for (int i{ }; i < length; ++i)
			value[i] = str[i];
	}

	// �� auto�� �����Ϸ��� char*�� �����Ͽ� ������ �Ѵ�.
	// ������ �����ε� �� ���� auto�� �� ���� ��ȯ�� �� �ܿ��� �ż� ��ô ���ϴ�
	auto operator+(String str) {
		// length - 1 �κп��� -1�� ���ִ� ����:
		// �⺻������ ���ڿ��� ������ \0�� �ֱ� ������,
		// ���ڿ��� ��ĥ ������ �ش� ���ڸ� ���� ������� �ϱ� ����.
		char* temp{ new char[length - 1 + str.length] };

		for (int i{ }; i < length - 1; ++i)
			temp[i] = value[i];

		// ����ִ� ��: C++���� "���� String Ŭ����"�� ���� �ٸ� ��ü��
		// ���� get�޼��带 ��������� �ʾƵ�,
		// �Ʒ� str.length ó�� private ������ ������ �����ϴ�.
		for (int i{ }; i < str.length; ++i)
			temp[i + length - 1] = str.value[i];

		return temp;
	}

	// �� auto&�� �����Ϸ��� ostream&�� �����Ͽ� ������ �ȴ�.
	// ���� �˰����� &�� �ڵ����� ���� �����ֱ� ������ & ���°� ���� �ٿ���� �ȴ�.
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
	cout << String{ "he" } + String{ "llo" } << endl;
	return 0;
}


