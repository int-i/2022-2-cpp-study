#include <iostream>
#include <numbers> // C++20 ���� ������ �ؾ� ��
using std::cin;
using std::cout;
using std::endl;

using std::numbers::pi;

// ���� �������̽� ����
struct ���� {
	// ��ӹ��� ��� ����
	// �ܼ��� �߻� Ŭ������ �ƴ� �������̽����� �ݵ�� ���� �����Լ�, ���� �Ҹ��ڸ� �����ؾ� �Ѵ�.
	// �ٸ� �ֱ� ������ ������ ���� �ű⿡ ���ؼ� ��������� �����ϴ� ��
	const int �⺻������{ 10 };
	const int �⺻������{ 10 };
	const int �⺻������{ 5 };

	virtual ~����() { }
	virtual double ũ����() = 0;
};

class ���簢�� : private ���� {
public:
	���簢��() : ����{ �⺻������ }, ����{ �⺻������ } { }
	���簢��(int ����, int ����) : ����{ ���� }, ����{ ���� } { }

	double ũ����() override { return ���� * ����; }

private:
	int ����;
	int ����;
};

class �� : public ���� {
public:
	��() : ������{ �⺻������ } { }
	��(int ������) : ������{ ������ } { }

	double ũ����() override { return ������ * pi; }
private:
	int ������;
};


int main() {
	cout << ���簢��{ }.ũ����() << endl;
	cout << ���簢��{ 5, 8 }.ũ����() << endl;

	cout << ��{ }.ũ����() << endl;
	cout << ��{ 3 }.ũ����() << endl;

	return 0;
}
