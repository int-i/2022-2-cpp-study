#include <iostream>
#include "Linkedlist.h"

using std::cin;
using std::cout;
using std::endl;

using std::string;

int main() {
	Linkedlist<string> li{ };

	li.push_back("¾È³ç");
	li.push_back("ÇÏ¼¼¿ä");
	li.push_back("·Î·½ ÀÔ¼û");

	li.display();

	li.pop_back();
	li.pop_back();

	li.display();

	li.pop_back();

	li.display();

	return 0;
}