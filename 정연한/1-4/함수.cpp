#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// y = 2x + 1을 프로그래밍 함수로 변환해보자
// 
// y = 2x + 1								<= y = f(x) 대입
// 
// f(x) = 2x + 1							<= 2와 x 사이에 생략 된 * 추가
// 
// f(x) = 2*x + 1							<= 함수 이름 f에서 lineFunc로 변경
// 
// lineFunc(x) = 2*x + 1					<= 매개변수에 자료형 추가
//
// lineFunc(int x) = 2*x + 1				<= 함수의 반환형 추가
// 
// int lineFunc(int x) = 2 * x + 1			<= 함수 본문 = 에서 중괄호로 변경
// 
// int lineFunc(int x) { return 2 * x + 1 }


int lineFunc(int); // 함수 선언


int main() {
	int result = 0;
	// 결과값을 저장할 변수 선언
	result = lineFunc(10); // 함수 호출
	cout << result << endl; // 결과 출력
	return 0;
}

int lineFunc(int x) { // 함수 정의
	return 2 * x + 1;
}
