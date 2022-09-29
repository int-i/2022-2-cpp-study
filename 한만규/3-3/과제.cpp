#include <iostream>
#include "Linkedlist.h"

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main() {
	Linkedlist<string> li{ };

	li.push_back("�ȳ�");
	li.push_back("�ϼ���");
	li.push_back("�η� �Լ�");

	li.display();

	li.pop_back();
	li.pop_back();

	li.display();

	li.pop_back();

	li.display();

	return 0;
}