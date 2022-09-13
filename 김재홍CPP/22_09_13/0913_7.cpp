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
		cout << "4인자 생성자 호출됨" << endl;
		price = don;
		this->x = a;
		this->y = b;

		owner = new char[strlen(s) + 1];
		
		
	}

	~Shape()
	{
		cout << "소멸자 호출됨" << endl;
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
헤더파일의 경우 무한루프에 빠지지 않게 하기 위해서 
#ifndef
#define
#endif를 사용한다.
*/