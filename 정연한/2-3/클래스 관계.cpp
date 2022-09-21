// is-a 관계와 has-a 관계를 설명하는 문서입니다.

// A는 B를 갖고있다.
// A has a B
class A {
public:
	// A라는 클래스는 멤버변수로 B 클래스의 인스턴스를 갖고 있다.
	B b; // B 클래스의 인스턴스(실체, 객체)
};

class B {
public:
	int i;
};

void foo() {
	A a{ };
	// a라는 객체가 소유한 b라는 객체의 i라는 변수에 접근해서 10으로 바꿈
	a.b.i = 10;
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