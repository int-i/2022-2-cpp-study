#pragma once
#include "Node.h"

template <typename T>
class Stack {
public:
	// ������: ��ü�� ������ �� ȣ�� ��
	Stack() : head{ nullptr }, tail{ nullptr } { }

	// �Ҹ���: ��ü�� ������ �� ȣ�� ��
	~Stack() { }

	void Push(T data);
	T Pop();
	T Top();
	bool isEmpty();

private:
	Node<T>* head;
	Node<T>* tail;
};

// ���ø� Ŭ�������� �޼����� ����� ���Ǹ� �и��ϱ� ���ؼ���
// �Ϲ����� Ŭ�������� �и��ϴ� �� ó�� .h���ϰ� .cpp���Ϸ� �����ϴ°� �ƴ϶�,
// �Ʒ�ó�� ���Ǻκ��� .hpp���Ϸ� �и����� ��,
// .h���Ͽ��� include ���־�� �Ѵ�.
// �̰� �Ǵ� ������,
// ���ø��� ������ Ÿ�ӿ�, ���ø��� �����ϴ� ������� �� ���Ͽ� �־�� �ϴµ�,
// #include�� �ش� ������ ������ �׳� ��ó�� �ܰ�(������ ���� �ܰ�)���� ���Խ��ѹ����� ������ ������ ���̴�.
#include "Stack.hpp"