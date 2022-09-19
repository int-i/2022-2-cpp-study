#include "bread.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// 객체지향프로그래밍의 4가지 요소
// 1. 추상화
// 2. 캡슐화
//		정보은닉
// 3. 상속
// 4. 다형성

int main() {
	bread 식빵("중력분", "흰색 계란", "앵커 버터");
	cout << 식빵.get_밀가루() << endl;

	식빵.set_밀가루("박력분");

	cout << 식빵.get_밀가루() << endl;


	return 0;
}