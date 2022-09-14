#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

using std::string;

// 만약 반복문이 없다면...
void 구구단(int 단) {
	cout << 단 << " * 1 = " << 1 * 단 << endl;
	cout << 단 << " * 2 = " << 2 * 단 << endl;
	cout << 단 << " * 3 = " << 3 * 단 << endl;
	cout << 단 << " * 4 = " << 4 * 단 << endl;
	cout << 단 << " * 5 = " << 5 * 단 << endl;
	cout << 단 << " * 6 = " << 6 * 단 << endl;
	cout << 단 << " * 7 = " << 7 * 단 << endl;
	cout << 단 << " * 8 = " << 8 * 단 << endl;
	cout << 단 << " * 9 = " << 9 * 단 << endl;
}



// for (선언부; 조건부; 증감부)

// ++ 증가연산자
// ++i == i = i + 1 == i += 1
// i에 들어있는 값을 1 증가시켜주는 연산자

//int main() {
//	// i나 j같은 반복을 위한 변수를 통해 반복 조건을 체크한다.
//	for (int i = 1; i < 10; ++i) {
//		cout << 2 << " * " << i << " = " << 2 * i << endl;
//	}
//	return 0;
//}


// while (조건부)

//int main() {
//	int a = 0;
//	cout << "10을 입력해주세요" << endl;
//	cin >> a;
//
//	// a가 10이 아닐 때, 반복
//	while (a != 10) {
//		cout << "a가 10이 아닙니다. 다시 입력해주세요." << endl;
//		cin >> a;
//	}
//	return 0;
//}


// 대문자는 소문자로, 소문자는 대문자로 변환시키는 프로그램

char 대문자로_변환(char);
char 소문자로_변환(char);


// do-while문 : 무조건 한번은 실행한 다음에 조건을 검사하는 반복문

int main() {
	string 문자열 = "";
	char 문자 = '\0'; // 문자를 입력 받을 변수 선언
	int i = 0; // 반복을 위한 반복자

	cout << "문자열 입력 : ";
	//cin >> 문자열; // 띄어쓰기는 포함 안함
	getline(cin, 문자열); // 띄어쓰기를 포함 함

	do {
		문자 = 문자열[i];

		if (문자 >= 'A' && 문자 <= 'Z')
			문자열[i] = 소문자로_변환(문자);
		else if (문자 >= 'a' && 문자 <= 'z')
			문자열[i] = 대문자로_변환(문자);
		else
			문자열[i] = 문자;
		i++;
	} while (문자 != '\0'); // NULL문자

	cout << "변환된 결과 ==> " << 문자열 << endl;
}


char 대문자로_변환(char 문자) {
	return 문자 - ('a' - 'A');
}
char 소문자로_변환(char 문자) {
	return 문자 + ('a' - 'A');
}
