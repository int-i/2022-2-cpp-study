#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class ���� {
public:
	����(int �ٸ�����, bool ��������, bool ������) {
		this->�ٸ����� = �ٸ�����;
		this->�������� = ��������;
		this->������ = ������;
	}
	// ���� �Լ�: �ڽ� Ŭ�������� ������(override) �� �� �ִ� �Լ�
	virtual void display() { cout << "���� �Դϴ�." << endl; };

	int get_�ٸ�����() { return �ٸ�����; }
	bool get_��������() { return ��������; }
	bool get_������() { return ������; }
private:
	int �ٸ�����;
	bool ��������;
	bool ������;
};

class ������ : public ���� {
public:
	������()
		// ��� �̴ϼȶ����� ����Ʈ
		// �͸� ���� ��ü�� ����� �ִ�.
		// �̸� ���� ���� Ŭ������ �����ڸ� ȣ��
		: ����{4, true, true} { }

	// �θ� Ŭ�������� ���� �� �����Լ��� �ڽ�Ŭ�������� �������̵��� ������
	// �������̵� �� �޼���� ������ ���� override Ű���带 �ٿ��ִ°� ���� ����
	void display() override { cout << "������ �Դϴ�." << endl; }; // �Լ� �������̵�
};

class ����� : public ���� {
public:
	�����() : ����{ 4, true, true } { }

	void display() override { cout << "����� �Դϴ�." << endl; };
};

int main() {
	���� ����{ 8, false, false };
	���� ������{ 4, true, true };
	���� ��{ 0, true, false };


	cout << "���� 1. �������� �ٸ��� �� �� �ϱ��?" << endl
		<< "�ٸ� ���� �Է� >>> ";
	int �ٸ�_����{ }; cin >> �ٸ�_����;

	if (�ٸ�_���� == ������.get_�ٸ�����())
		cout << "�����Դϴ�!" << endl;
	else
		cout << "Ʋ�Ⱦ��..." << endl;



	cout << "���� 2. ���� ���� ���� �ִ� �����ΰ���?" << endl
		<< "0. �ƴϴ�, 1. �׷���." << endl;
	bool ��_����{ }; cin >> ��_����;

	if (��_���� == ��.get_������())
		cout << "�����Դϴ�!" << endl;
	else
		cout << "Ʋ�Ⱦ��..." << endl;



	cout << "���� 3. ����� ������ ���� �ִ� �����ΰ���?" << endl
		<< "0. �ƴϴ�, 1. �׷���." << endl;
	bool ��������{ }; cin >> ��������;

	if (�������� == ����.get_��������())
		cout << "�����Դϴ�!" << endl;
	else
		cout << "Ʋ�Ⱦ��..." << endl;

	return 0;
}