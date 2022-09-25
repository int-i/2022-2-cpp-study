#include <iostream>
using namespace std;

class  도형 {
public:
	도형()
		: 가로{}, 세로{} {
		cout << "도형 생성" << endl;
	}
	도형(int 가로, int 세로)
		: 가로{ 가로 }, 세로{ 세로 } {}

	virtual ~도형() {
		cout << "도형 소멸" << endl;
	}

	virtual int 크기계산() {
		return 가로 * 세로;
	}

	int get_가로() {
		return 가로;
	}
	void set_가로(int 가로) {
		this->가로 = 가로;
	}

	int get_세로() {
		return 세로;
	}
	void set_세로(int 세로) {
		this->세로 = 세로;
	}

private:
	int 가로;
	int 세로;
};

class 직사각형 : public 도형 {
public:
	직사각형()
		: 도형{ } {
		cout << "직사각형 생성" << endl;
	}

	직사각형(int 가로, int 세로)
		: 도형{ 가로,세로 } {}

	~직사각형() override {
		cout << "직사각형 소멸" << endl;
	}

	int 크기계산() override {
		return get_가로() * get_세로();
	}
};


int main() {
	int 가로, 세로;

	cout << "직사각형의 가로와 세로 길이를 입력하세요: ";
	cin >> 가로 >> 세로;

	도형* 도형포인터{ new 직사각형{가로, 세로} };

	도형포인터->크기계산();

	cout << "직사각형의 크기: " << 도형포인터->크기계산() << endl;

	delete 도형포인터;

	return 0;
}