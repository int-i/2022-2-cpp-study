#include <iostream>
using namespace std;

class student {
private:
	int 나이, 키, 학번;
	double 학점;

public:
	student(int 나이, int 키, int 학번, double 학점)
		: 나이{ 나이 }, 키{ 키 }, 학번{ 학번 }, 학점{ 학점 } {
	}

	void set_나이(int 나이) {
		this->나이 = 나이;
	}
	int get_나이() {
		return 나이;
	}

	void set_키(int 키) {
		this->키 = 키;
	}
	int get_키() {
		return 키;
	}

	void set_학번(int 학번) {
		this->학번 = 학번;
	}
	int get_학번() {
		return 학번;
	}

	void set_학점(double 학점) {
		this->학점 = 학점;
	}
	double get_학점() {
		return 학점;
	}
};

int main() {
	student 류이은(21, 180, 12211767, 4.5);
	cout << "내 나이는 : " << 류이은.get_나이() << endl;

	류이은.set_키(230);

	cout << 류이은.get_키() << endl;

	return 0;
}