#pragma once
#include "Node.h"

template <typename T>
class Stack {
public:
	// ������: ��ü�� ������ �� ȣ�� ��
	Stack() : head{ nullptr }, tail{ nullptr } { }

	// �Ҹ���: ��ü�� ������ �� ȣ�� ��
	~Stack() { }

	// �޼������ ��
	void Push(T value);
	T Pop();
	T Top();
	bool isEmpty();

private:
	Node<T>* head;
	Node<T>* tail;
};

#include "Stack.hpp"