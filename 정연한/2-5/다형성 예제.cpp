#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

using std::vector;


// 이런식으로 모든 메서드가 순수 가상 함수로 이루어진 클래스를 인터페이스라 함
// 인터페이스는 멤버 필드나 구체적으로 구현한 메서드를 갖지 않고 특정 기능을 약속한 메서드만 갖음
// 모든 멤버는 해당 인터페이스를 사용하는 개발자와의 약속으로 모든 멤버를 public으로 접근 지정
// C++에서는 구조체의 기본 접근 지정자가 public이어서 구조체를 이용하여 인터페이스를 정의하는 경우도 많다.

struct 탈것 {
	virtual ~탈것() { cout << "탈것 소멸자" << endl; }

	// 이런식으로 내용을 아예 구현을 하지 않으면 가상 함수 중에서도 아예 명세만 존재한다고하여
	// 순수 가상 함수
	// 라고 부른다.
	virtual void move() = 0;
};

class 자동차 : public 탈것 {
public:
	~자동차() override { cout << "자동차 소멸자" << endl; }

	void move() override {
		cout << "도로로 달립니다." << endl;
	}
};

class 전철 : public 탈것 {
public:
	~전철() override { cout << "전철 소멸자" << endl; }

	void move() override {
		cout << "선로로 주행합니다." << endl;
	}
};

class 비행기 : public 탈것 {
public:
	~비행기() override { cout << "비행기 소멸자" << endl; }

	void move() override {
		cout << "하늘을 납니다." << endl;
	}
};

int main() {
	vector<탈것*> 탈것들{ new 자동차{ }, new 전철{ }, new 비행기{ } };
	for (auto& elem : 탈것들)
		elem->move();

	for (auto& elem : 탈것들)
		delete elem;

	return 0;
}
