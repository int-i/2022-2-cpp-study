#pragma once
#include <iostream>
using std::string;


// 접근지정자: public, protected, private
// public: 어떤 위치에서든 접근이 가능하게 해주는 접근 지정자
// protected: 상속을 받은 자식 클래스에서만 접근이 가능하게 해주는 접근 지정자
// private: 이 필드 또는 메서드가 선언된 클래스에서만 접근이 가능하게 해주는 접근 지정자

class bread {
public: // 메서드가 있는 위치
	// 생성자의 역할: 클래스의 멤버변수를 초기화
	bread(string 밀가루, string 계란, string 버터)
		// 멤버 이니셜라이저
		: 밀가루{ 밀가루 }, 계란{ 계란 }, 버터{ 버터 } {
	}

	void 만드는데_사용된_재료();

	void set_밀가루(string 밀가루) {
		this->밀가루 = 밀가루;
	}

	string get_밀가루() {
		return 밀가루;
	}

private: // 필드가 있는 위치
	string 밀가루;
	string 계란;
	string 버터;
};
