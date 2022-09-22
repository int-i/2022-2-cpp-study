// is-a 관계와 has-a 관계를 설명하는 문서입니다.
// 상속 관계에 대한 좀 더 자세한 내용은
// https://codermun-log.tistory.com/80
// 를 참고하세요

// B는 A를 갖고있다.
// A has a B
class A {
public:
	int i;
};

class B {
public:
	// B 라는 클래스는 멤버변수로 A 클래스의 인스턴스를 갖고 있다.
	A a; // A 클래스의 인스턴스(실체, 객체)
};

void foo() {
	B b{ };
	// b라는 객체가 소유한 a라는 객체의 i라는 변수에 접근해서 10으로 바꿈
	b.a.i = 10;
}

// D is a C
class C {
public:
	int i;
};

// D 클래스는 상속을 통해 C 클래스의 멤버를 상속받는다.
class D : public C {

};

void foo2() {
	D d{ };

	// d 객체의 i 변수의 값을 10으로 바꿔줌
	d.i = 10;
}