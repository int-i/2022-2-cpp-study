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
		cout << "defualt 생성자 호출됨" << endl;
	}

	Shape(int don, double a, double b)
	{
		cout << "3인자 생성자 호출됨" << endl;
		this->price = don;
		x = a;
		y = b;
	}

	Shape(int don, double a, double b, char* s)
	{
		cout << "4인 생성자 호출됨" << endl;
		price = don;
		x = a;
		y = b;
	}

	~Shape()
	{
		cout << "소멸자 생성됨" << endl;
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