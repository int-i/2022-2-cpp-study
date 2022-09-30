#pragma once

// �̷������� Ŭ������ �޼������ ����� ������ �и���Ŵ���ν� ���� ������ ������ �� �ִ�.

template <typename T>
bool Stack<T>::isEmpty() { // ������ ��������� true�� ��ȯ�ϴ� �޼���
	// �Ʒ� ������ �ؼ����ڸ�,
	// tail�� nullptr�� ����Ų�ٸ� true ��ȯ, �׷��� �ʴٸ� false ��ȯ
	return tail == nullptr ? true : false;
}

template <typename T>
T Stack<T>::Top() { // �������� ���� ����� ���� ��ȯ�ϴ� �޼���
	// ������ ����� ���̹Ƿ�, tail�� data�� ��ȯ�Ѵ�.
	// �̶� ��ȯ�Ǵ� ���� �ڷ����� T�̹Ƿ�, ��ȯ���� �翬�� T
	return tail->data;
}

template <typename T>
void Stack<T>::Push(T data) {
	Node<T>* node{ new Node<T> };
	node->data = data;

	// ���� head �����Ͱ� ��������� �� ��� ����
	if (isEmpty()) {
		head = node;
		tail = node;
	}
	else {
		tail->next = node;
		tail = tail->next;
	}
}

template <typename T>
T Stack<T>::Pop() {
	if (isEmpty()) // ���� stack�� ���������
		return -1;

	Node<T>* ptr{ head };
	T data{ head->data };

	if (head == tail) { // �����Ͱ� �ϳ��϶�
		delete head;
		head = nullptr;
		tail = nullptr;
	}
	else { // �����Ͱ� �ϳ��� �ƴϸ�
		while (ptr != nullptr) { // tail(top)�� ���� �� �� tail ����
			if (ptr->next == tail) {
				data = tail->data;

				ptr->next = nullptr;
				delete tail;
				tail = ptr;
				break;
			}
			ptr = ptr->next;
		}
	}
	return data; // ���ŵ� ����� ������ ��ȯ
}
