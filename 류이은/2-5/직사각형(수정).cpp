#include <iostream>
using namespace std;

class  ���� {
public:
	����()
		: ����{}, ����{} {
		cout << "���� ����" << endl;
	}
	����(int ����, int ����)
		: ����{ ���� }, ����{ ���� } {}

	virtual ~����() {
		cout << "���� �Ҹ�" << endl;
	}

	virtual int ũ����() {
		return ���� * ����;
	}

	int get_����() {
		return ����;
	}
	void set_����(int ����) {
		this->���� = ����;
	}

	int get_����() {
		return ����;
	}
	void set_����(int ����) {
		this->���� = ����;
	}

private:
	int ����;
	int ����;
};

class ���簢�� : public ���� {
public:
	���簢��()
		: ����{ } {
		cout << "���簢�� ����" << endl;
	}

	���簢��(int ����, int ����)
		: ����{ ����,���� } {}

	~���簢��() override {
		cout << "���簢�� �Ҹ�" << endl;
	}

	int ũ����() override {
		return get_����() * get_����();
	}
};


int main() {
	int ����, ����;

	cout << "���簢���� ���ο� ���� ���̸� �Է��ϼ���: ";
	cin >> ���� >> ����;

	����* ����������{ new ���簢��{����, ����} };

	����������->ũ����();

	cout << "���簢���� ũ��: " << ����������->ũ����() << endl;

	delete ����������;

	return 0;
}