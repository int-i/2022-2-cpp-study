#pragma once

// 이런식으로 클래스의 메서드들의 선언과 구현을 분리시킴으로써 정보 은닉을 구현할 수 있다.

template <typename T>
bool Stack<T>::isEmpty() {// 비어있으면 true를 리턴
	return tail == nullptr ? true : false;
}

template <typename T>
T Stack<T>::Top() { // 마지막에 들어온 노드의 값 리턴
	return tail->value;
}

template <typename T>
void Stack<T>::Push(T value) {
	Node<T>* node = new Node<T>;
	node->value = value;

	// 만약 머리의 포인터가 비어있으면 새 노드 지정
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
	if (isEmpty()) // 만약 stack이 비어있으면
		return -1;
	else {
		Node<T>* ptr = head;
		T value = head->value;
		if (head == tail) { // 데이터가 하나일때
			head = nullptr;
			tail = nullptr;
			delete head;
		}
		else // 데이터가 하나가 아니면
		{
			while (ptr != nullptr) { //꼬리(top)값 삭제후 새 꼬리 대입
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

