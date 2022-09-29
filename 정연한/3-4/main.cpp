#include <iostream>
#include <stack>

#include "Stack.h"

using std::cin;
using std::cout;
using std::endl;

using std::string;

using std::stack;

// 자료구조 - 스택
// 
// 


int main() {
	Stack<int> stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);

	cout << stack.Top() << endl;


	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl;
	cout << stack.Pop() << endl << endl;
	return 0;
}