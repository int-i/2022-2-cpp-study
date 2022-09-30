#pragma once

#include <iostream>
using std::cout;
using std::endl;

template<typename T>
T Queue<T>::peek() {
	// ť������ ���� ���� �� ���� ���� ���� ���������Ƿ�
	// fornt����� ���� peek���̴�.
	return front->data;
}

template <typename T>
void Queue<T>::enQueue(T data) {
	Node<T>* node{ new Node<T> };
	node->data = data;
	
	// ���� head �����Ͱ� ��������� �� ��� ����
	if (isEmpty())
		front = rear = node;
	else {
		// ���� ���� ������ ���� rear�� next�� ���� ���� node�� �޾��� ��,
		rear->next = node;
		// rear�� ���� �޾��� ��带 ����Ű�Բ� ���ش�.
		rear = rear->next;

		// ��� �Ʒ�ó�� ���ٷ� ���� ���� ������ �������� ��������.
		//rear = rear->next = node;
	}
}

template<typename T>
T Queue<T>::deQueue() {
	if (isEmpty()) // ���� queue�� ���������
		return -1;
	
	T data{ front->data };

	if (front == rear) { // �����Ͱ� �ϳ��϶�
		delete front; // front�� ����Ű�� node�� �����ϰ�,
		front = rear = nullptr; // front�� rear��� nullptr�� ����Ű�� ����
	}
	else { // �����Ͱ� �ϳ��� �ƴϸ�
		Node<T>* ptr{ front }; // ���� front�� ����Ű�� ��带 ptr�� ����Ű�� �ϰ�,
		front = front->next; // front�� front�� next�� ����Ű�� ��带 ����Ű�� �ϰ�,
		delete ptr; // ptr, �� ���� front�� ����Ű�� ��带 ����
	}
	return data; // ���ŵ� ����� ������ ��ȯ
}

template <typename T>
bool Queue<T>::isEmpty() {
	return front == nullptr;
}
