#include "mycat.h"
using namespace std;

//과제 : 2 - 2 코드에 작성된 클래스를 이용해 간단한 퀴즈를 하나 만들어보자
//- 구현 방법은 자유롭게 해도 되며, 클래스 자체를 새로 구현해서 퀴즈를 만들어도 괜찮다.
//- 잘 모르겠다면, 같이 올라간 과제 예시를 참고할 것

int main() {
	mycat cat1{"G",false, true};
	mycat cat2{"B",true, false};

	cout << "우리집 오즈는 무슨 색일까요?" << endl;
	string bodycolor{};
	cin >> bodycolor;

	if (bodycolor == cat2.get_bodycolor())
		cout << "정답!" << endl;
	else
		cout << "땡!" << endl;


	cout << "우리집 레옹이는 몸에 점이 있을까요? 1:있다. 0:없다." << endl;
	bool dot{};
	cin >> dot;

	if (dot == cat1.get_dot())
		cout << "정답!" << endl;
	else
		cout << "땡!" << endl;

	cout << "우리집 오즈와 레오는 줄무늬가 있을까요? 순서대로 써보세요. 1:있다. 0:없다." << endl;
	bool stripe1{};
	bool stripe2{};
	cin >> stripe1>>stripe2;

	if (stripe1 == cat2.get_stripe()&&stripe2 == cat1.get_stripe())
		cout << "정답!" << endl;
	else
		cout << "땡!" << endl;
}