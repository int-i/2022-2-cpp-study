#include "bread.h"

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// ��ü�������α׷����� 4���� ���
// 1. �߻�ȭ
// 2. ĸ��ȭ
//		��������
// 3. ���
// 4. ������

int main() {
	bread �Ļ�("�߷º�", "��� ���", "��Ŀ ����");
	cout << �Ļ�.get_�а���() << endl;

	�Ļ�.set_�а���("�ڷº�");

	cout << �Ļ�.get_�а���() << endl;


	return 0;
}