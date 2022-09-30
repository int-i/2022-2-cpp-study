#pragma once

// 이런식으로 클래스의 메서드들의 선언과 구현을 분리시킴으로써 정보 은닉을 구현할 수 있다.

template <typename T>
bool Stack<T>::isEmpty() { // 스택이 비어있으면 true를 반환하는 메서드
	// 아래 구문을 해석하자면,
	// tail이 nullptr을 가리킨다면 true 반환, 그렇지 않다면 false 반환
	return tail == nullptr ? true : false;
}

template <typename T>
T Stack<T>::Top() { // 마지막에 들어온 요소의 값을 반환하는 메서드
	// 마지막 요소의 값이므로, tail의 data를 반환한다.
	// 이때 반환되는 값의 자료형은 T이므로, 반환형도 당연히 T
	return tail->data;
}

template <typename T>
void Stack<T>::Push(T data) {
	Node<T>* node{ new Node<T> };
	node->data = data;

	// 만약 head 포인터가 비어있으면 새 노드 지정
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
	if (isEmpty()) // 만약 stack이 비어있으면
		return -1;

	Node<T>* ptr{ head };
	T data{ head->data };

	if (head == tail) { // 데이터가 하나일때
		delete head;
		head = nullptr;
		tail = nullptr;
	}
	else { // 데이터가 하나가 아니면
		while (ptr != nullptr) { // tail(top)값 삭제 후 새 tail 대입
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
	return data; // 제거된 요소의 데이터 반환
}
