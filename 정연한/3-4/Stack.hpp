#pragma once

// �̷������� Ŭ������ �޼������ ����� ������ �и���Ŵ���ν� ���� ������ ������ �� �ִ�.

template <typename T>
bool Stack<T>::isEmpty() {// ��������� true�� ����
	return tail == nullptr ? true : false;
}

template <typename T>
T Stack<T>::Top() { // �������� ���� ����� �� ����
	return tail->value;
}

template <typename T>
void Stack<T>::Push(T value) {
	Node<T>* node = new Node<T>;
	node->value = value;

	// ���� �Ӹ��� �����Ͱ� ��������� �� ��� ����
	if (head == nullptr) {
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
	else {
		Node<T>* ptr = head;
		T value = head->value;
		if (head == tail) { // �����Ͱ� �ϳ��϶�
			head = nullptr;
			tail = nullptr;
			delete head;
		}
		else // �����Ͱ� �ϳ��� �ƴϸ�
		{
			while (ptr != nullptr) { //����(top)�� ������ �� ���� ����
				if (ptr->next == tail) {
					value = tail->value;
					ptr->next = nullptr;
					delete tail;
					tail = ptr;
					break;
				}
				ptr = ptr->next;
			}
			return value;
		}
		return value;
	}
}

