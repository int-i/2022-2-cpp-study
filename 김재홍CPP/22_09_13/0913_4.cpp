/*
struct와 class의 차이점 : class는 private member를 정의할 수 있지만 struct는 그렇지 못한다.

클래스는 구조체 + 함수, 메소드를 담고있다
*/

/*
객체지향 중요 요소
데이터 추상화 : 실 세계의 문제를 해결하기 위해 불필요한 정보를 제거하고 필요한 정보만을 추출해 가능 과정
캡슐화 : 관련있는 데이터와 함수를 하나의 단위로 묶는것
정보은닉 : 객체내의 데이터 및 함수에 대한 접근 권한을 제어
상속 : 실 세계의 상속을 객체의 계층구조 간의 상속으로 규정하여 재사용과 확장성을 증대
다형성 : 보이는 모습은 하나이지만 실질적으로 쓰이는 기능은 여러가지를 수행

클래스란?
클래스는 객체를 만들기 위한 모형 또는 틀
객체를 만들려면 반드시 객체의 다양한 특성을 표현할 수 있는 모형인 클래스가 필요

객체란?
클래스에서 하나의 구체적인 표현
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
	cout << "좌표 : " << choi.x << ", " << choi.y << endl;

	setPrice(choi, 3);
	cout << "가치 : " << choi.price << endl;

	return 0;
}
*/