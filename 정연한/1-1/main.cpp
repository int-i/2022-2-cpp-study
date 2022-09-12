// input, output stream의 약자
// 말 그대로 입출력 스트림과 관련된 헤더파일이다.
// 스트림이란 운영체제에 의해 생성되는 가상의 연결 고리를 의미하며, 중간 매개자 역할을 한다.
#include <iostream>

// std라는 네임스페이스를 써라 하고 컴파일러에게 지시하는 것
// 그래서 이름도 using 지시문
using namespace std;

// C++ 프로그램의 시작이자 끝을 담당하는 main 함수
// C++ 프로그램이 시작되면 main 함수가 시작되고,
// main 함수가 종료되면 C++ 프로그램이 종료된다.
int main() {
	// 출력은 cout을 통해 할 수 있다.
	// cout 뒤에 <<(출력 스트림 연산자)를 통해 출력하고자 하는 값을 작성해주자.
	cout << "Hello inti!" << endl;

	// 함수를 종료하는 return 문, 이 줄이 실행이 되면 main함수가 종료된다.
	return 0;
}




//int main() {
//	int a = 0;
//
//	cin >> a;
//	cout << a << endl;
//	return 0;
//}





// using 선언문
// using 지시문은 프로그래밍 연습때만 쓰고 현업에선 이거 쓰세요.
//using std::cin;
//using std::cout;
//using std::endl;

// 요즘 인싸들이 쓴다는 잘나가는 채-신 문법인 후행 반환 형식
// 내가 프로그래밍 힙스터가 되고 싶다, 그럼 쓰셔도 됩니다.
//auto main() -> int {
//	cout << "Hello inti" << endl;
//	return 0;
//}
