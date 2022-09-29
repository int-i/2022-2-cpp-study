#pragma once
#include "Node.h"

template <typename T>
class Stack {
public:
	// 생성자: 객체를 생성할 때 호출 됨
	Stack() : head{ nullptr }, tail{ nullptr } { }

	// 소멸자: 객체를 삭제할 때 호출 됨
	~Stack() { }

	// 메서드들의 명세
	void Push(T value);
	T Pop();
	T Top();
	bool isEmpty();

private:
	Node<T>* head;
	Node<T>* tail;
};

#include "Stack.hpp"