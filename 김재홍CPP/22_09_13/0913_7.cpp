/*#include <iostream>

using std::cout;
using std::endl;

class Shape
{
private:
	int price;

public:
	double x, y;
	char *owner;

	Shape(int don = 0, double a = 0, double b = 0, const char* s = "you")
	{
		cout << "4���� ������ ȣ���" << endl;
		price = don;
		this->x = a;
		this->y = b;

		owner = new char[strlen(s) + 1];
		
		
	}

	~Shape()
	{
		cout << "�Ҹ��� ȣ���" << endl;
		delete owner;
	}
};

int main()
{
	Shape shp[5];

	return 0;
}
*/


/*
��������� ��� ���ѷ����� ������ �ʰ� �ϱ� ���ؼ� 
#ifndef
#define
#endif�� ����Ѵ�.
*/