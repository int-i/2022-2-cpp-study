#include <iostream>
using namespace std;

class ���� {
public:
	����(int ���ȣ, bool ��������, bool ���) {
		this->���ȣ = ���ȣ;
		this->�������� = ��������;
		this->��� = ���;
	}
	
	virtual void display() { cout << "���� �����Դϴ�." << endl; };

	int get_���ȣ() { return ���ȣ; };
	bool get_��������() { return ��������; };
	bool get_���() { return ���; };

private: 
	int ���ȣ;
	bool ��������;
	bool ���;
};

class ���� : public ���� {
public:
	����() : ����{ 25, 1, 0 } { }

	void display() override { cout << "�����Դϴ�" << endl; };
};

class ����� : public ���� {
public:
	�����() : ����{ 1, 0, 0 } { }

	void display() override { cout << "������Դϴ�" << endl; };
};

class ȣ���� : public ���� {
public:
	ȣ����() : ����{ 7, 0, 1 } { }

	void display() override { cout << "�Ⱥ��Դϴ�" << endl; };
};



int main() {
	���� Sancho{ 25, 1, 0 };
	���� DeGea{ 1, 0, 0 };
	���� Ronaldo{ 7, 0, 1 };

	cout << "����1. ������ ���ȣ�� �� ���ϱ��?\n";
	int ���ȣ{ }; cin >> ���ȣ;
	if (���ȣ == Sancho.get_���ȣ())
		cout << "����" << endl;
	else
		cout << "��!" << endl;

	cout << "\n����2. ������� ������ �����ΰ���?\n" << "�ƴϴ�: 0, �׷���: 1" << endl;
	bool ��������{ }; cin >> ��������;
	if (�������� == DeGea.get_��������())
		cout << "����" << endl;
	else
		cout << "��!" << endl;

	cout << "\n����3. ȣ���δ� ����߳���?\n" << "�ƴϴ�: 0, �׷���: 1" << endl;
	bool ���{ }; cin >> ���;
	if (��� == Ronaldo.get_���())
		cout << "����" << endl;
	else
		cout << "��!" << endl;

	
	return 0;
}