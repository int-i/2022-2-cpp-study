#include <iostream>
using namespace std;

class Shape {
public:
	Shape()	{
		cout << "call base constructor\n";
	}

	virtual ~Shape() {
		cout << "call base desturctor\n";
	}

	virtual void area() = 0;
};

class Circle : public Shape {
public:
	Circle(int r = 0)
		:Shape {}
	{
		cout << "call derived constructor\n";
		set_Radius(r);
	}

	~Circle() override {
		cout << "call derived destructor\n";
	}

	int get_Radius() {
		return r;
	}

	void set_Radius(int r) {
		this->r = r;
	}

	void area() override {
		cout << (get_Radius() * get_Radius()) * 3.14 << endl;
	}

private:
	int r;
};

class Rectangle : public Shape {
public:
	Rectangle(int x, int y)
		: Shape{} 
	{
		cout << "call derived constructor\n";
		set_X(x);
		set_Y(y);
	}

	~Rectangle() override {
		cout << "call derived destructor\n";
	}

	int get_X() {
		return x;
	}

	void set_X(int x) {
		this->x = x;
	}

	int get_Y() {
		return y;
	}

	void set_Y(int y) {
		this->y = y;
	}

	void area() override {
		cout << get_X() * get_Y() << endl;
	}

private:
	int x;
	int y;
};

int main() {
	Shape* shp[2];
	shp[0] = new Circle(5);
	shp[1] = new Rectangle(10, 3);

	for (int i = 0; i < 2; i++)
	{
		shp[i]->area();
	}

	for (int i = 0; i < 2; i++)
	{
		delete shp[i];
	}
}