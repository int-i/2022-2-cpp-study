#include <iostream>
#include <list>
using namespace std;


template <typename T>
T add(T a, T b) {
	return a + b;
}

template <typename T>
struct Node {
	T data;
	Node<T>* next;
};

template <typename T>
class Linkedlist {
public:
	Linkedlist() : head{ }, tail{ }, size{ } { }

	void push_back(T data) {
		Node<T>* node{ new Node<T> };

		node->data = data;
		node->next = nullptr;

		if (head == nullptr) {
			head = node;
			tail = node;
		}
		else {
			tail->next = node;
			tail = tail->next;
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

		Node<T>* ptr = head;

		while (ptr->next != tail)
			ptr = ptr->next;

		tail = ptr;
		delete ptr->next;
		ptr->next = nullptr;

		--size;
	}

	void display() {
		if (head == nullptr)
			cout << "����Ʈ�� ����ֽ��ϴ�!" << endl;

		Node<T>* ptr = head;

		while (ptr != nullptr) {
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


int main() {
	Linkedlist<double> li{ };
	Linkedlist<int> li2{ };
	Linkedlist<string> li3{ };

	li.push_back(3.14);
	li.push_back(5.73);
	li.push_back(9.12);

	li2.push_back(3);
	li2.push_back(874);
	li2.pop_back();
	li2.push_back(35);
	
	li3.push_back("����� ȭ���� �ϴ� ��� �� ������ �ִµ�");
	li3.push_back("�ϳ��� ���� ������ ���� �ʴ� ���̰�");
	li3.push_back("������ �ϳ���");
	li3.push_back("���� ����");
	li3.pop_back();

	li.display();
	li2.display();
	li3.display();


	return 0;
}