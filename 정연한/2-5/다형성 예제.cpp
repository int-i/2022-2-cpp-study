#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

using std::vector;


// �̷������� ��� �޼��尡 ���� ���� �Լ��� �̷���� Ŭ������ �������̽��� ��
// �������̽��� ��� �ʵ峪 ��ü������ ������ �޼��带 ���� �ʰ� Ư�� ����� ����� �޼��常 ����
// ��� ����� �ش� �������̽��� ����ϴ� �����ڿ��� ������� ��� ����� public���� ���� ����
// C++������ ����ü�� �⺻ ���� �����ڰ� public�̾ ����ü�� �̿��Ͽ� �������̽��� �����ϴ� ��쵵 ����.

struct Ż�� {
	virtual ~Ż��() { cout << "Ż�� �Ҹ���" << endl; }

	// �̷������� ������ �ƿ� ������ ���� ������ ���� �Լ� �߿����� �ƿ� ���� �����Ѵٰ��Ͽ�
	// ���� ���� �Լ�
	// ��� �θ���.
	virtual void move() = 0;
};

class �ڵ��� : public Ż�� {
public:
	~�ڵ���() override { cout << "�ڵ��� �Ҹ���" << endl; }

	void move() override {
		cout << "���η� �޸��ϴ�." << endl;
	}
};

class ��ö : public Ż�� {
public:
	~��ö() override { cout << "��ö �Ҹ���" << endl; }

	void move() override {
		cout << "���η� �����մϴ�." << endl;
	}
};

class ����� : public Ż�� {
public:
	~�����() override { cout << "����� �Ҹ���" << endl; }

	void move() override {
		cout << "�ϴ��� ���ϴ�." << endl;
	}
};

int main() {
	vector<Ż��*> Ż�͵�{ new �ڵ���{ }, new ��ö{ }, new �����{ } };
	for (auto& elem : Ż�͵�)
		elem->move();

	for (auto& elem : Ż�͵�)
		delete elem;

	return 0;
}
