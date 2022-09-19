#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	Student(int, int, string, string);

	const int getHeight();
	void setHeight(int);

	const int getAge();
	void setAge(int);

	const string getId();
	void setId(string);

	const string getGrade();
	void setGrade(string);

private:
	int height;
	int age;
	string id;
	string grade;
};

Student::Student(int height, int age, string id, string grade) {
	setHeight(height);
	setAge(age);
	setId(id);
	setGrade(grade);
}

const int Student::getHeight() {
	return height;
}
void Student::setHeight(int height) {
	this->height = height;
}

const int Student::getAge() {
	return age;
}
void Student::setAge(int age) {
	this->age = age;
}

const string Student::getId() {
	return id;
}
void Student::setId(string id) {
	this->id = id;
}

const string Student::getGrade() {
	return grade;
}
void Student::setGrade(string grade) {
	this->grade = grade;
}

int main()
{
	Student s1(182, 21, "12211829", "A") ;

	cout << s1.getHeight() << endl
		<< s1.getAge() << endl
		<< s1.getId() << endl
		<< s1.getGrade() << endl;

	return 0;
}