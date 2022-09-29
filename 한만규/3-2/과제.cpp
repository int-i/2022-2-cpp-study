#include <iostream>
#include "Linkedlist.h"

using std::cin;
using std::cout;
using std::endl;


int main() {
	Linkedlist li{ };

	li.push_back(10);
	li.push_back(20);
	li.push_back(30);

	li.display();

	li.pop_back();
	li.pop_back();
	
	li.display();

	li.pop_back();

	li.display();

	return 0;
}