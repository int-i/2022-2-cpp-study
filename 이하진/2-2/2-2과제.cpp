#include "mycat.h"
using namespace std;

//���� : 2 - 2 �ڵ忡 �ۼ��� Ŭ������ �̿��� ������ ��� �ϳ� ������
//- ���� ����� �����Ӱ� �ص� �Ǹ�, Ŭ���� ��ü�� ���� �����ؼ� ��� ���� ������.
//- �� �𸣰ڴٸ�, ���� �ö� ���� ���ø� ������ ��

int main() {
	mycat cat1{"G",false, true};
	mycat cat2{"B",true, false};

	cout << "�츮�� ����� ���� ���ϱ��?" << endl;
	string bodycolor{};
	cin >> bodycolor;

	if (bodycolor == cat2.get_bodycolor())
		cout << "����!" << endl;
	else
		cout << "��!" << endl;


	cout << "�츮�� �����̴� ���� ���� �������? 1:�ִ�. 0:����." << endl;
	bool dot{};
	cin >> dot;

	if (dot == cat1.get_dot())
		cout << "����!" << endl;
	else
		cout << "��!" << endl;

	cout << "�츮�� ����� ������ �ٹ��̰� �������? ������� �Ẹ����. 1:�ִ�. 0:����." << endl;
	bool stripe1{};
	bool stripe2{};
	cin >> stripe1>>stripe2;

	if (stripe1 == cat2.get_stripe()&&stripe2 == cat1.get_stripe())
		cout << "����!" << endl;
	else
		cout << "��!" << endl;
}