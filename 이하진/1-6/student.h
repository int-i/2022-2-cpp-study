#pragma once
#include <iostream>
using namespace std;
//��� ������ Ű, ����, �й�, ������ �������л� Ŭ������ �����ϱ�
class student {
public:
	student(double Ű, int ����, int �й�, double ����)
		:Ű{Ű},����{����},�й�{�й�},����{����}{}
	void �л�_����() {
		cout << Ű << " " << ���� << " " << �й� << " " << ����;
	}
	
	~student() {
	
	}

private:
	double Ű;
	int ����;
	int �й�;
	double ����;
};
