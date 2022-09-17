#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// 매직 넘버 대신 열거형을 통해 신호 상태를 나타내어주자.
// 굳이 열거형을 쓰는 이유는 나중에 알아보기 편하게 하기 위해서이다.
// 신호등 = 0 이렇게 무책임하게 써놓고,
// "어라 0이 뭘 의미했더라" 이런 대참사를 막으려면,
// enum이나 constexpr을 통해 이름이 붙은 상수를 따로 정의해주어야 한다.
// 열거형에서 별다른 값을 지정해주지 않는다면, 빨간불은 0, 노란불은 1, 파란불은 2 이 된다.
// 아닌 것 같다면 직접 cout << 빨간불 해보자
enum 신호 { 빨간불, 노란불, 파란불 };

// if (조건식)

//int main() {
//	int 신호등 = 빨간불;
//
//	if (신호등 == 빨간불) {
//		cout << "차를 멈췄습니다." << endl;
//	}
//	else if (신호등 == 노란불) {
//		cout << "속도를 줄여 천천히 지나갑니다." << endl;
//	}
//	else {
//		cout << "원래 속도로 지나갑니다." << endl;
//	}
//	return 0;
//}



//switch (조건식) { case n: break; default: break; }

int main() {
	int 신호등 = 노란불;

	switch (신호등) {
	case 빨간불:
		cout << "차를 멈췄습니다." << endl;
		break;
	case 노란불:
		cout << "속도를 줄여 천천히 지나갑니다." << endl;
		break;
	default:
		cout << "원래 속도로 지나갑니다." << endl;
		break;
	}

	return 0;
}
