#include <iostream>
#include <numbers> // C++20 으로 컴파일 해야 됨
using std::cin;
using std::cout;
using std::endl;

using std::numbers::pi;

// 도형 인터페이스 선언
struct 도형 {
	// 상속받을 상수 선언
	// 단순한 추상 클래스가 아닌 인터페이스에선 반드시 순수 가상함수, 가상 소멸자만 포함해야 한다.
	// 다만 최근 디자인 패턴을 보면 거기에 더해서 상수까지는 포함하는 듯
	const int 기본가로폭{ 10 };
	const int 기본세로폭{ 10 };
	const int 기본반지름{ 5 };

	virtual ~도형() { }
	virtual double 크기계산() = 0;
};

class 직사각형 : private 도형 {
public:
	직사각형() : 가로{ 기본가로폭 }, 세로{ 기본세로폭 } { }
	직사각형(int 가로, int 세로) : 가로{ 가로 }, 세로{ 세로 } { }

	double 크기계산() override { return 가로 * 세로; }

private:
	int 가로;
	int 세로;
};

class 원 : public 도형 {
public:
	원() : 반지름{ 기본반지름 } { }
	원(int 반지름) : 반지름{ 반지름 } { }

	double 크기계산() override { return 반지름 * pi; }
private:
	int 반지름;
};


int main() {
	cout << 직사각형{ }.크기계산() << endl;
	cout << 직사각형{ 5, 8 }.크기계산() << endl;

	cout << 원{ }.크기계산() << endl;
	cout << 원{ 3 }.크기계산() << endl;

	return 0;
}
