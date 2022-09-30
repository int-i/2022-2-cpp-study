#pragma once
#include "Node.h"
// Queue의 연산
// peek() : Queue의 앞쪽(front)에서 원소를 삭제 없이 반환
// enQueue(T) : Queue의 뒤쪽(rear 다음)에 원소를 삽입
// deQueue() : Queue의 앞쪽(front)에서 원소를 삭제하고 반환
// isEmpty() : Queue가 공백상태인지 확인

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