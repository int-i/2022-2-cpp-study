#pragma once
#include <iostream>
using namespace std;
//멤버 변수로 키, 나이, 학번, 성적을 가지는학생 클래스를 구현하기
class student {
public:
	student(double 키, int 나이, int 학번, double 성적)
		:키{키},나이{나이},학번{학번},성적{성적}{}
	void 학생_정보() {
		cout << 키 << " " << 나이 << " " << 학번 << " " << 성적;
	}
	
	~student() {
	
	}

private:
	double 키;
	int 나이;
	int 학번;
	double 성적;
};
