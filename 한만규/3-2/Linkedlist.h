#pragma once

#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;

class Linkedlist {
public:
	Linkedlist() : head{ }, tail{ }, size{ } { }

	void push_back(int data) {
		Node* node{ new Node }; 

		node->data = data;
		node->prev = nullptr;
		node->next = nullptr;

		if (head == nullptr) {
			head = node;
			tail = node;
		}
		else {
			Node* ptr = tail;
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

		Node* ptr = head;

		while (ptr != nullptr) { // ����Ʈ�� ���� ���� �� ������ �ݺ�
			cout << ptr->data;
			if (ptr->next != nullptr)
				cout << "->";
			ptr = ptr->next;
		}
		cout << endl;
	}

private:
	Node* head;
	Node* tail;
	int size;
};
