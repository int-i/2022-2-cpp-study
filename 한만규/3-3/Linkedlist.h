#pragma once

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

template <typename T>
class Linkedlist {
public:
	Linkedlist() : head{ }, tail{ }, size{ } { }

	void push_back(T data) {
		Node<T>* node{ new Node<T> };

		node->data = data;
		node->prev = nullptr;
		node->next = nullptr;

		if (head == nullptr) {
			head = node;
			tail = node;
		}
		else {
			Node<T>* ptr = tail;
			tail->next = node;
			tail = tail->next;
			tail->prev = ptr;
		}

		++size;
	}

	void pop_back() {
		if (head == tail) {
			delete head;
			head = tail = nullptr;
			--size;
			return;
		}

		tail = tail->prev;
		delete tail->next;
		tail->next = nullptr;

		--size;
	}

	// ����Ʈ ���� ���� ����ϴ� �޼���
	void display() {
		if (head == nullptr)
			cout << "����Ʈ�� ����ֽ��ϴ�!" << endl;

		Node<T>* ptr = head;

		while (ptr != nullptr) { // ����Ʈ�� ���� ���� �� ������ �ݺ�
			cout << ptr->data;
			if (ptr->next != nullptr)
				cout << "->";
			ptr = ptr->next;
		}
		cout << endl;
	}

private:
	Node<T>* head;
	Node<T>* tail;
	int size;
};
