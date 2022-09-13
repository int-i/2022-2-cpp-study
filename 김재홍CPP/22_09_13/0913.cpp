/*
오버로딩
함수의 구별 : 시그니쳐가 같은 함수는 하나만 정의

함수 오버로딩이란?
동일한 이름의 함수를 중복해서 정의하는 것!

함수 오버로딩의 조건
매개 변수의 개수 혹은 타입이 일치하지 않는다.

함수 오버로딩이 가능한 이유
호출할 함수를 매개 변수의 정보까지 참조해서 호출

int function1(int n) ...
int function1(char c) ...

int function2(int v) ...
int function2(int v1, int v2) ...

매개변수의 타입이 다르거나, 같은 매개변수의 타입인 경우 개수가 다르다.


*/

/*
#include <iostream>

int Volume(int length, int width = 1, int height = 1); // parameter은 오른쪽에서부터 채워나간다.

int main()
{
	std::cout << "[3 ,3 ,3] : " << Volume(3, 3, 3) << std::endl;
	std::cout << "[5, 5, def] : " << Volume(5, 5) << std::endl;
	std::cout << "[7, def, def] : " << Volume(7) << std::endl;
	return 0;
}

int Volume(int length, int width, int height) // 선선언과 차이가 있으면 안된다.
{
	return length * width * height;
}
*/

// overloading과 overriding의 차이 