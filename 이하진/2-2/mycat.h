#pragma once
#include <iostream>
using namespace std;
//���� : 2 - 2 �ڵ忡 �ۼ��� Ŭ������ �̿��� ������ ��� �ϳ� ������
//- ���� ����� �����Ӱ� �ص� �Ǹ�, Ŭ���� ��ü�� ���� �����ؼ� ��� ���� ������.
//- �� �𸣰ڴٸ�, ���� �ö� ���� ���ø� ������ ��
class mycat {
public:
	mycat(string bodycolor, bool stripe, bool dot){
		this->bodycolor = bodycolor;
		this->dot = dot;
		this->stripe = stripe;
	}
	virtual void display() { cout << "�츮�� ����� �Դϴ�." << endl; };

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