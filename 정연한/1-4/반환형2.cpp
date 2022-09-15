#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// 이 예시는 하기의 방법이 잘 못 된 방법임을 설명하고 있습니다.
// 컴파일이 안되는것이 정상이에요.

void func() {
	return 0; // 불가능
	return; // 함수를 끝내는 용도로만 기능
}

int main() {
	int i = func(); // 반환값이 없으니 불가능
	return 0;
}

