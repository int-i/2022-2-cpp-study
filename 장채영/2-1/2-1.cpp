#pragma once
#include <iostream>

using namespace std;

class person {
public:
	person(int tall, int age, string ID, int grade)
		: tall{ tall }, age{ age }, ID{ ID }, grade{ grade } {
	}

	int student_card(int tall, int age, int ID ) {
		cout << tall << "\n" << age << "\n" << ID << "\n";
	}

private:
	int tall;
	int	age;
	int grade;
	string ID;
};