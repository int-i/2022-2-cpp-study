#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using std::ostream;

// std에 있는 string과는 관계 없는, 내가 만든 String 클래스
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
		// length - 1 부분에서 -1을 해주는 이유:
		// 기본적으로 문자열의 끝에는 \0이 있기 때문에,
		// 문자열을 합칠 때에는 해당 문자를 빼고 합쳐줘야 하기 때문.
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
	String str{ "안녕" };
	String str2{ "하세요" };

	cout << str + str2 << endl;
	return 0;
}


