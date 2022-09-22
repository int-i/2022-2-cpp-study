#pragma once
#include <iostream>
using namespace std;
//과제 : 2 - 2 코드에 작성된 클래스를 이용해 간단한 퀴즈를 하나 만들어보자
//- 구현 방법은 자유롭게 해도 되며, 클래스 자체를 새로 구현해서 퀴즈를 만들어도 괜찮다.
//- 잘 모르겠다면, 같이 올라간 과제 예시를 참고할 것
class mycat {
public:
	mycat(string bodycolor, bool stripe, bool dot){
		this->bodycolor = bodycolor;
		this->dot = dot;
		this->stripe = stripe;
	}
	virtual void display() { cout << "우리집 고양이 입니다." << endl; };

	string get_bodycolor() {
		return bodycolor;
	}
	bool get_stripe() {
		return stripe;
	}
	bool get_dot() {
		return dot;
	}

private:
	string bodycolor;
	bool stripe;
	bool dot;
};