#pragma once
#include "Node.h"
// Queue�� ����
// peek() : Queue�� ����(front)���� ���Ҹ� ���� ���� ��ȯ
// enQueue(T) : Queue�� ����(rear ����)�� ���Ҹ� ����
// deQueue() : Queue�� ����(front)���� ���Ҹ� �����ϰ� ��ȯ
// isEmpty() : Queue�� ����������� Ȯ��

template <typename T>
class Queue {
public:
	Queue() : front{ }, rear{ }, size{ } { }

	T peek();
	void enQueue(T);
	T deQueue();
	bool isEmpty();
private:
	Node<T>* front;
	Node<T>* rear;
	int size;
};

#include "Queue.hpp"