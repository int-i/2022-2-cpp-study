#include <iostream>
#include <string>
using namespace std;

class student {
private:
	double GPA;
	int age, height, student_ID;
public:
	student(int age, int height, int student_ID, double GPA) {
		age = 20;
		height = 175;
		student_ID = 12000000;
		GPA = 3.7;
	}
	void setGPA(double GPA) {
		this->GPA = GPA;
	}
	double getGPA() {
		return GPA;
	}
	void set_age(int age) {
		this->age = age;
	}
	int get_age() {
		return age;
	}
	void set_height(int height) {
		this->height = height;
	}
	int get_height() {
		return height;
	}
	void set_studentid(int student_ID) {
		this->student_ID = student_ID;
	}
	int get_studentid() {
		return student_ID;
	}
};

