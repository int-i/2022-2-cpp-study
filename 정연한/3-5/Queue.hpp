#pragma once

#include <iostream>
using std::cout;
using std::endl;

template<typename T>
T Queue<T>::peek() {
	// 큐에서는 가장 먼저 들어간 값이 가장 먼저 빠져나오므로
	// fornt노드의 값이 peek값이다.
	return front->data;
}

template <typename T>
void Queue<T>::enQueue(T data) {
	Node<T>* node{ new Node<T> };
	node->data = data;
	
	// 만약 head 포인터가 비어있으면 새 노드 지정
	if (isEmpty())
		front = rear = node;
	else {
		// 원래 가장 마지막 값인 rear의 next에 새로 만든 node를 달아준 뒤,
		rear->next = node;
		// rear가 새로 달아준 노드를 가리키게끔 해준다.
		rear = rear->next;

		// 사실 아래처럼 한줄로 써줄 수도 있지만 가독성이 떨어진다.
		//rear = rear->next = node;
	}
}

template<typename T>
T Queue<T>::deQueue() {
	if (isEmpty()) // 만약 queue가 비어있으면
		return -1;
	
	T data{ front->data };

	if (front == rear) { // 데이터가 하나일때
		delete front; // front가 가리키는 node를 삭제하고,
		front = rear = nullptr; // front와 rear모두 nullptr을 가리키게 수정
	}
	else { // 데이터가 하나가 아니면
		Node<T>* ptr{ front }; // 원래 front가 가리키던 노드를 ptr이 가리키게 하고,
		front = front->next; // front는 front의 next가 가리키던 노드를 가리키게 하고,
		delete ptr; // ptr, 즉 원래 front가 가리키던 노드를 삭제
	}
	return data; // 제거된 요소의 데이터 반환
}

template <typename T>
bool Queue<T>::isEmpty() {
	return front == nullptr;
}
