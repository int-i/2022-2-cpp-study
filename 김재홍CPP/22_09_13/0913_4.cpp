/*
struct�� class�� ������ : class�� private member�� ������ �� ������ struct�� �׷��� ���Ѵ�.

Ŭ������ ����ü + �Լ�, �޼ҵ带 ����ִ�
*/

/*
��ü���� �߿� ���
������ �߻�ȭ : �� ������ ������ �ذ��ϱ� ���� ���ʿ��� ������ �����ϰ� �ʿ��� �������� ������ ���� ����
ĸ��ȭ : �����ִ� �����Ϳ� �Լ��� �ϳ��� ������ ���°�
�������� : ��ü���� ������ �� �Լ��� ���� ���� ������ ����
��� : �� ������ ����� ��ü�� �������� ���� ������� �����Ͽ� ����� Ȯ�强�� ����
������ : ���̴� ����� �ϳ������� ���������� ���̴� ����� ���������� ����

Ŭ������?
Ŭ������ ��ü�� ����� ���� ���� �Ǵ� Ʋ
��ü�� ������� �ݵ�� ��ü�� �پ��� Ư���� ǥ���� �� �ִ� ������ Ŭ������ �ʿ�

��ü��?
Ŭ�������� �ϳ��� ��ü���� ǥ��
*/

/*
#include <iostream>
using std::cout;
using std::endl;

struct Shape
{
	double x, y;
	char owner[20];
	int price;
};

void setXY(Shape &shp, double xx, double yy)
{
	shp.x = xx;
	shp.y = yy;
}

void setPrice(Shape& shp, int don)
{
	shp.price = don;
}

int main()
{
	Shape choi = { 1.1, 2.2, "Choi", 1 };
	cout << "��ǥ : " << choi.x << ", " << choi.y << endl;

	setPrice(choi, 3);
	cout << "��ġ : " << choi.price << endl;

	return 0;
}
*/