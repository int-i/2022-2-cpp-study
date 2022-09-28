#include <iostream>
#include <list>
using namespace std;

struct Node {
	string data;
	Node* next;
};

class Linkedlist {
public:
	Linkedlist() : head{ }, tail{ }, size{ } { }

	void push_back(string data) {
		Node* node{ new Node };

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

		Node* ptr = head;

		while (ptr->next != tail)
			ptr = ptr->next;

		tail = ptr;
		delete ptr->next;
		ptr->next = nullptr;

		--size;
	}

	void display() {
		if (head == nullptr)
			cout << "리스트가 비어있습니다!" << endl;

		Node* ptr = head;

		while (ptr != nullptr) {
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

int main() {
	Linkedlist sll{ };
	sll.push_back("Elementary");
	sll.push_back("Middle school");
	sll.push_back("High school");
	sll.push_back("College");

	sll.display();

	sll.pop_back();
	sll.pop_back();

	sll.display();

	sll.pop_back();
	sll.pop_back();

	sll.display();


	cout << "STL에 구현 되어 있는 링크드 리스트" << endl;
	list<int> li{ };

	li.push_back(10);
	li.push_back(20);
	li.push_back(41);
	li.push_back(28);

	for (auto& elem : li)
		cout << elem << "->";
	cout << endl;

	li.pop_back();
	li.pop_back();
	li.pop_back();

	for (auto& elem : li)
		cout << elem << "->";
	cout << endl;

	return 0;
}