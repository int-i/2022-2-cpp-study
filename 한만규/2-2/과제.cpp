#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class ���� {
public:
	����(int �ٸ�����, bool �ư�������, bool ������) {
		this->�ٸ����� = �ٸ�����;
		this->�ư������� = �ư�������;
		this->������ = ������;
	}
	// ���� �Լ�: �ڽ� Ŭ�������� ������(override) �� �� �ִ� �Լ�
	virtual void display() { cout << "���� �Դϴ�." << endl; };

	int get_�ٸ�����() { return �ٸ�����; }
	bool get_�ư�������() { return �ư�������; }
	bool get_������() { return ������; }
private:
	int �ٸ�����;
	bool �ư�������;
	bool ������;
};

class ������ : public ���� {
public:
	������()
		// ��� �̴ϼȶ����� ����Ʈ
		// �͸� ���� ��ü�� ����� �ִ�.
		// �̸� ���� ���� Ŭ������ �����ڸ� ȣ��
		: ����{ 4, false, true } { }

	// �θ� Ŭ�������� ���� �� �����Լ��� �ڽ�Ŭ�������� �������̵��� ������
	// �������̵� �� �޼���� ������ ���� override Ű���带 �ٿ��ִ°� ���� ����
	void display() override { cout << "������ �Դϴ�." << endl; }; // �Լ� �������̵�
};

class ����� : public ���� {
public:
	�����() : ����{ 4, false, true } { }

	void display() override { cout << "����� �Դϴ�." << endl; };
};

int main() {
	���� ����{ 8, true, false };
	���� ������{ 4, false, true };
	���� ��{ 0, false, false };


	cout << "���� 1. ���� �ٸ��� �� �� �ϱ��?" << endl
		<< "�ٸ� ���� �Է� >>> ";
	int �ٸ�_����{ }; cin >> �ٸ�_����;

	if (�ٸ�_���� == ��.get_�ٸ�����())
		cout << "�����Դϴ�!" << endl;
	else
		cout << "Ʋ�Ⱦ��..." << endl;



	cout << "���� 2. ����� ���� ���� �ִ� �����ΰ���?" << endl
		<< "0. �ƴϴ�, 1. �׷���." << endl;
	bool ��_����{ }; cin >> ��_����;

	if (��_���� == ����.get_������())
		cout << "�����Դϴ�!" << endl;
	else
		cout << "Ʋ�Ⱦ��..." << endl;



	cout << "���� 3. �������� �ư��̸� ���� �ִ� �����ΰ���?" << endl
		<< "0. �ƴϴ�, 1. �׷���." << endl;
	bool �ư���_����{ }; cin >> �ư���_����;

	if (�ư���_���� == ������.get_�ư�������())
		cout << "�����Դϴ�!" << endl;
	else
		cout << "Ʋ�Ⱦ��..." << endl;

	return 0;
}