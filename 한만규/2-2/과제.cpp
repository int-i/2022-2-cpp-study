#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class 동물 {
public:
	동물(int 다리개수, bool 아가미유무, bool 털유무) {
		this->다리개수 = 다리개수;
		this->아가미유무 = 아가미유무;
		this->털유무 = 털유무;
	}
	// 가상 함수: 자식 클래스에서 재정의(override) 될 수 있는 함수
	virtual void display() { cout << "동물 입니다." << endl; };

	int get_다리개수() { return 다리개수; }
	bool get_아가미유무() { return 아가미유무; }
	bool get_털유무() { return 털유무; }
private:
	int 다리개수;
	bool 아가미유무;
	bool 털유무;
};

class 포유류 : public 동물 {
public:
	포유류()
		// 멤버 이니셜라이저 리스트
		// 익명 동물 객체를 만들고 있다.
		// 이를 통해 동물 클래스의 생성자를 호출
		: 동물{ 4, false, true } { }

	// 부모 클래스에서 선언 된 가상함수는 자식클래스에서 오버라이딩이 가능함
	// 오버라이딩 된 메서드는 구분을 위해 override 키워드를 붙여주는게 보기 좋다
	void display() override { cout << "포유류 입니다." << endl; }; // 함수 오버라이딩
};

class 파충류 : public 동물 {
public:
	파충류() : 동물{ 4, false, true } { }

	void display() override { cout << "파충류 입니다." << endl; };
};

int main() {
	동물 문어{ 8, true, false };
	동물 강아지{ 4, false, true };
	동물 뱀{ 0, false, false };


	cout << "문제 1. 뱀의 다리는 몇 개 일까요?" << endl
		<< "다리 개수 입력 >>> ";
	int 다리_개수{ }; cin >> 다리_개수;

	if (다리_개수 == 뱀.get_다리개수())
		cout << "정답입니다!" << endl;
	else
		cout << "틀렸어요..." << endl;



	cout << "문제 2. 문어는 털을 갖고 있는 동물인가요?" << endl
		<< "0. 아니다, 1. 그렇다." << endl;
	bool 털_유무{ }; cin >> 털_유무;

	if (털_유무 == 문어.get_털유무())
		cout << "정답입니다!" << endl;
	else
		cout << "틀렸어요..." << endl;



	cout << "문제 3. 강아지는 아가미를 갖고 있는 동물인가요?" << endl
		<< "0. 아니다, 1. 그렇다." << endl;
	bool 아가미_유무{ }; cin >> 아가미_유무;

	if (아가미_유무 == 강아지.get_아가미유무())
		cout << "정답입니다!" << endl;
	else
		cout << "틀렸어요..." << endl;

	return 0;
}