#include <iostream>
#include "Queue.h"

using std::cin;
using std::cout;
using std::endl;


// �ڷᱸ�� - ť
// ť�� FIFO(First In First out)������ �ڷᱸ����, ���Լ��� ������� �Ҹ���.
// �� �״�� ���� ���� ���� ���� ������ �����ε�,
// ���ذ� �� �ȵȴٸ� ���� ����� ������ �����ϸ� ���� �� ����.
// ť�� ������ peek, enQueue, deQueue ���� �ִµ�, ������ ���� ������ �Ѵ�.
// peek: ���� ���� ������, �� front�� ���� ��ȯ�Ѵ�.
// enQueue: ť�� ���� ����ִ´�.
// deQueue: ť���� ���� �����Ѵ�.
// 
// ���ÿ����� top, push, pop�� ���� ����������,
// ���ÿ��� push�� tail�� ���� ����ְ� tail���� ���� ���´ٸ�,
// ť���� enQueue�� rear�� ���� ����ְ�, front���� ���� ������.
// 
// ���������� pop��, tail���� ���� ��������
// deQueue�� front���� ���� �����ٴ� �������� �ִ�.
// 
// ť�� �ַ� �ӽ÷� �ڷḦ �����ϴ� ��Ȳ���� ���̴µ�,
// ��ǥ������ ���۰� ť�� �̿��� �ý����̴�.
// 
// ť�� ���� ť�� ȯ�� ť �̷��� �ΰ����� �����ϴµ�,
// �� �ڵ忡�� ���� �� ���ô� ���� ť, �� �߿����� ��ũ�� ����Ʈ�� �̿��� ��ũ�� ť�� �����Ͽ���.
// 

int main() {
	Queue<int> queue{ };
	
	queue.enQueue(4);
	queue.enQueue(9);
	queue.enQueue(1);
	queue.enQueue(7);


	cout << queue.deQueue() << " ����" << endl;
	cout << queue.deQueue() << " ����" << endl;
	cout << queue.deQueue() << " ����" << endl;
	cout << queue.deQueue() << " ����" << endl;

	return 0;
}
