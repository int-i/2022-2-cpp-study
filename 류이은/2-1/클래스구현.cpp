#include <iostream>
using namespace std;

class student {
private:
	int ����, Ű, �й�;
	double ����;

public:
	student(int ����, int Ű, int �й�, double ����)
		: ����{ ���� }, Ű{ Ű }, �й�{ �й� }, ����{ ���� } {
	}

	void set_����(int ����) {
		this->���� = ����;
	}
	int get_����() {
		return ����;
	}

	void set_Ű(int Ű) {
		this->Ű = Ű;
	}
	int get_Ű() {
		return Ű;
	}

	void set_�й�(int �й�) {
		this->�й� = �й�;
	}
	int get_�й�() {
		return �й�;
	}

	void set_����(double ����) {
		this->���� = ����;
	}
	double get_����() {
		return ����;
	}
};

int main() {
	student ������(21, 180, 12211767, 4.5);
	cout << "�� ���̴� : " << ������.get_����() << endl;

	������.set_Ű(230);

	cout << ������.get_Ű() << endl;

	return 0;
}