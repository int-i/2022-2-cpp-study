#pragma once
#include <iostream>
using namespace std;
//��� ������ Ű, ����, �й�, ������ �������л� Ŭ������ �����ϱ�
class student {
public:
	student(const double* Ű, int ����, int �й�, int ����):Ű{111.0},����{11},�й�{11111111},����{4.5}{}
	void �л�_����() {
		cout << Ű << " " << ���� << " " << �й� << " " << ����;
	}
	
	~student() {
	
	}

private:
	const double* Ű;
	int ����;
	int �й�;
	double ����;
};
