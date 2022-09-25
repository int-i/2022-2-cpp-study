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

		value = new char[length] { };

		for (int i{ }; i < length; ++i)
			value[i] = str[i];
	}

	// 이 auto는 컴파일러가 char*로 유추하여 컴파일 한다.
	// 연산자 오버로딩 할 때는 auto를 잘 쓰면 반환형 안 외워도 돼서 무척 편리하다
	auto operator+(String str) {
		// length - 1 부분에서 -1을 해주는 이유:
		// 기본적으로 문자열의 끝에는 \0이 있기 때문에,
		// 문자열을 합칠 때에는 해당 문자를 빼고 합쳐줘야 하기 때문.
		char* temp{ new char[length - 1 + str.length] };

		for (int i{ }; i < length - 1; ++i)
			temp[i] = value[i];

		// 재미있는 점: C++에선 "같은 String 클래스"의 서로 다른 객체는
		// 따로 get메서드를 만들어주지 않아도,
		// 아래 str.length 처럼 private 영역에 접근이 가능하다.
		for (int i{ }; i < str.length; ++i)
			temp[i + length - 1] = str.value[i];

		return temp;
	}

	// 이 auto&는 컴파일러가 ostream&로 유추하여 컴파일 된다.
	// 보면 알겠지만 &는 자동으로 유추 안해주기 때문에 & 들어가는건 따로 붙여줘야 된다.
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
	cout << String{ "he" } + String{ "llo" } << endl;
	return 0;
}


