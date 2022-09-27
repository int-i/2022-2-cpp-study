#include <iostream>
#include <list>

using std::cin;
using std::cout;
using std::endl;

using std::list;

// 자료구조 - 링크드 리스트
// 배열과 링크드리스트는 가장 간단한 자료구조로 STL에 컨테이너로서 정의되어있다.
// 
// 컨테이너란? 같은 타입의 여러 객체를 저장하는 일종의 집합
// 
// 
// 배열은 저번 시간에 알아보았으니 이번 시간에는 링크드 리스트에 대해서 알아보도록 하자.
// 링크드 리스트는 '노드'라 부르는 여러 지점들을 이어서 한 줄로 엮은 자료구조이다.
// 
// 노드란? 네트워크 상에서 연결 될 수 있는 지점 하나 하나를 의미한다.
// 일반적으로 C++에서는 struct를 통해 구현하게 된다.
// 
// 링크드 리스트를 구현하기 위해선 이 노드들을 한데 엮어 줄 방법이 필요하다.
// 이때 각 노드를 연결하는 연결선을 브랜치(Branch)라 부르는데, C++에서는 포인터를 통해 구현한다.
// 
// 따라서 링크드 리스트를 구현하기 위한 노드에는
// '리스트에 들어갈 데이터'를 넣을 변수와
// 다음 노드를 가리킬 포인터 변수
// 이렇게 두가지가 들어가게 된다.
// 
// ex)
struct Node {
	int data;
	Node* next;
};
// 이 구조체를 보면, 데이터가 들어갈 int 변수 data와 다음 노드를 가리킬 노드 포인터 변수 next가 들어가 있다.
// 링크드 리스트는 이 구조체의 객체를 필드로 가진다.
// 
// 위의 예제에선 다음 노드를 가리키는 포인터만 들어가있는데,
// 만약 위의 구조체에 이전 노드를 가리키는 포인터도 들어가있다면,
// 탐색을 할 때 양방향으로 탐색을 할 수가 있게 된다.
// 
// 이처럼 다음 노드를 가리키는 포인터만 있는 노드를 사용한 링크드 리스트를 싱글 링크드 리스트
// 이전 노드, 다음 노드를 가리키는 포인터가 모두 있는 노드를 사용한 링크드 리스트를 더블 링크드 리스트라 한다.
// 
// 아래는 위에서 선언한 노드를 사용한 싱글 링크드 리스트의 예제이다.
// ex)
class Linkedlist {
public:
	Linkedlist() : head{ }, tail{ }, size{ } { }

	// 리스트의 끝(back)에 노드를 집어넣는(push) 메서드
	void push_back(int data) {
		Node* node{ new Node }; // 리스트에 넣을 새 노드 동적 할당

		// 새 노드의 값 설정
		node->data = data;
		node->next = nullptr;

		if (head == nullptr) { // head가 비어있을 경우 == 리스트가 비어있는 경우
			// head 와 tail, 두 포인터 모두 새 노드를 가리키게 한다.
			head = node;
			tail = node;
		}
		else { // head가 비어있지 않은 경우 == 리스트가 비어있지 않은 경우
			// 기존의 tail 포인터가 가리키는 노드의 next 포인터가 nullptr에서 새 노드를 가리키게 하고,
			tail->next = node;
			// tail 포인터는 기존의 tail이 가리키던 노드의 다음 노드,
			// 즉 새 노드를 가리키게 한다.
			tail = tail->next;
		}

		++size; // 리스트에 노드가 추가되었으니, 리스트의 size를 1 증가시킨다.
	}


	// 리스트의 끝(back)의 노드를 빼내는(pop) 메서드
	void pop_back() {
		// 리스트에 노드가 하나뿐이라면,
		if (head == tail) {
			delete head; // 해당 노드를 할당 해제 해주고,
			head = tail = nullptr; // head와 tail을 nullptr을 가리키게 하고,
			--size; // 리스트의 사이즈를 1 줄이고,
			return; // 함수를 종료한다.
		}
		
		Node* ptr = head; // 자유롭게 이동 시킬 노드 포인터 선언

		// head부터 tail 노드 직전까지 포인터를 이동
		while (ptr->next != tail)
			ptr = ptr->next;
		
		tail = ptr; // tail 포인터를 ptr이 가리키는 노드로 옮기고,
		delete ptr->next; // 기존의 tail이 가리키던 노드는 할당 해제
		ptr->next = nullptr; // 그 뒤, ptr의 next포인터는 nullptr을 가리키게 한다.

		--size; // 리스트의 노드가 제거되었으니, 리스트의 size를 1 감소시킨다.
	}

	// 리스트 안의 값을 출력하는 메서드
	void display() {
		if (head == nullptr)
			cout << "리스트가 비어있습니다!" << endl;

		Node* ptr = head;

		while (ptr != nullptr) { // 리스트의 끝에 도달 할 때까지 반복
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
// 위의 예제는 push연산, pop연산, 리스트 내의 값 출력 하는 연산만 구현된 간단한 링크드 리스트이다.
// 
// 

int main() {
	// 빈 링크드 리스트 선언
	Linkedlist sll{ };
	// 링크드 리스트 내에 값 4개 집어넣기
	sll.push_back(4);
	sll.push_back(7);
	sll.push_back(1);
	sll.push_back(8);

	// 링크드 리스트 내용 출력
	sll.display();

	// 리스트의 맨 뒤에서 노드 두개 제거
	sll.pop_back();
	sll.pop_back();

	// 잘 제거되었는지 출력
	sll.display();

	// 나머지 두개 노드도 제거
	sll.pop_back();
	sll.pop_back();
	// 잘 제거 되었는지 출력
	sll.display();



	cout << "STL에 구현 되어 있는 링크드 리스트" << endl;
	list<int> li{ }; // STL에 구현 되어 있는 링크드 리스트

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