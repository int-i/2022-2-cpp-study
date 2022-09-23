#include <iostream>
using namespace std;

class 맨유 {
public:
	맨유(int 등번호, bool 영국국적, bool 노쇼) {
		this->등번호 = 등번호;
		this->영국국적 = 영국국적;
		this->노쇼 = 노쇼;
	}
	
	virtual void display() { cout << "맨유 선수입니다." << endl; };

	int get_등번호() { return 등번호; };
	bool get_영국국적() { return 영국국적; };
	bool get_노쇼() { return 노쇼; };

private: 
	int 등번호;
	bool 영국국적;
	bool 노쇼;
};

class 산초 : public 맨유 {
public:
	산초() : 맨유{ 25, 1, 0 } { }

	void display() override { cout << "산초입니다" << endl; };
};

class 데헤아 : public 맨유 {
public:
	데헤아() : 맨유{ 1, 0, 0 } { }

	void display() override { cout << "데헤아입니다" << endl; };
};

class 호날두 : public 맨유 {
public:
	호날두() : 맨유{ 7, 0, 1 } { }

	void display() override { cout << "안보입니다" << endl; };
};



int main() {
	맨유 Sancho{ 25, 1, 0 };
	맨유 DeGea{ 1, 0, 0 };
	맨유 Ronaldo{ 7, 0, 1 };

	cout << "문제1. 산초의 등번호는 몇 번일까요?\n";
	int 등번호{ }; cin >> 등번호;
	if (등번호 == Sancho.get_등번호())
		cout << "정답" << endl;
	else
		cout << "땡!" << endl;

	cout << "\n문제2. 데헤아의 국적은 영국인가요?\n" << "아니다: 0, 그렇다: 1" << endl;
	bool 영국국적{ }; cin >> 영국국적;
	if (영국국적 == DeGea.get_영국국적())
		cout << "정답" << endl;
	else
		cout << "땡!" << endl;

	cout << "\n문제3. 호날두는 노쇼했나요?\n" << "아니다: 0, 그렇다: 1" << endl;
	bool 노쇼{ }; cin >> 노쇼;
	if (노쇼 == Ronaldo.get_노쇼())
		cout << "정답" << endl;
	else
		cout << "땡!" << endl;

	
	return 0;
}