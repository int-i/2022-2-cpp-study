#pragma once
#include "Node.h"

template <typename T>
class Stack {
public:
	// 생성자: 객체를 생성할 때 호출 됨
	Stack() : head{ nullptr }, tail{ nullptr } { }

	// 소멸자: 객체를 삭제할 때 호출 됨
	~Stack() { }

	void Push(T data);
	T Pop();
	T Top();
	bool isEmpty();

private:
	Node<T>* head;
	Node<T>* tail;
};

// 템플릿 클래스에서 메서드의 선언과 정의를 분리하기 위해서는
// 일반적인 클래스에서 분리하는 것 처럼 .h파일과 .cpp파일로 구분하는게 아니라,
// 아래처럼 정의부분을 .hpp파일로 분리해준 뒤,
// .h파일에서 include 해주어야 한다.
// 이게 되는 이유는,
// 템플릿은 컴파일 타임에, 템플릿을 구성하는 내용들이 한 파일에 있어야 하는데,
// #include는 해당 파일의 내용을 그냥 전처리 단계(컴파일 이전 단계)에서 포함시켜버리기 때문에 가능한 것이다.
#include "Stack.hpp"