/*
#include <iostream>

using namespace std;

class Shape
{
private:
	int price;

public:
	double x, y;
	char owner[20];

	Shape()
	{
		cout << "defualt ������ ȣ���" << endl;
	}

	Shape(int don, double a, double b)
	{
		cout << "3���� ������ ȣ���" << endl;
		this->price = don;
		x = a;
		y = b;
	}

	Shape(int don, double a, double b, char* s)
	{
		cout << "4�� ������ ȣ���" << endl;
		price = don;
		x = a;
		y = b;
	}

	~Shape()
	{
		cout << "�Ҹ��� ������" << endl;
	}

};

int main()
{
	Shape choi;
	cout << choi.x << endl;
	cout << choi.y << endl;

	return 0;
}
*/