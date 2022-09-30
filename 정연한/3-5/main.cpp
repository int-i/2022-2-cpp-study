#include <iostream>
#include "Queue.h"

using std::cin;
using std::cout;
using std::endl;


// 자료구조 - 큐
// 큐는 FIFO(First In First out)구조의 자료구조로, 선입선출 구조라고도 불린다.
// 말 그대로 먼저 들어온 값이 먼저 나가는 구조인데,
// 이해가 잘 안된다면 입장 대기줄 같은걸 생각하면 쉬울 것 같다.
// 큐의 연산은 peek, enQueue, deQueue 등이 있는데, 다음과 같은 동작을 한다.
// peek: 가장 먼저 나가는, 즉 front의 값을 반환한다.
// enQueue: 큐에 값을 집어넣는다.
// deQueue: 큐에서 값을 제거한다.
// 
// 스택에서의 top, push, pop과 같은 연산이지만,
// 스택에서 push는 tail에 값을 집어넣고 tail에서 값을 빼냈다면,
// 큐에서 enQueue는 rear에 값을 집어넣고, front에서 값을 빼낸다.
// 
// 마찬가지로 pop도, tail에서 값을 빼냈지만
// deQueue는 front에서 값을 빼낸다는 차이점이 있다.
// 
// 큐는 주로 임시로 자료를 저장하는 상황에서 쓰이는데,
// 대표적으로 버퍼가 큐를 이용한 시스템이다.
// 
// 큐는 선형 큐와 환형 큐 이렇게 두가지가 존재하는데,
// 이 코드에서 구현 된 예시는 선형 큐, 그 중에서도 링크드 리스트를 이용한 링크드 큐를 구현하였다.
// 

int main() {
	Queue<int> queue{ };
	
	queue.enQueue(4);
	queue.enQueue(9);
	queue.enQueue(1);
	queue.enQueue(7);


	cout << queue.deQueue() << " 삭제" << endl;
	cout << queue.deQueue() << " 삭제" << endl;
	cout << queue.deQueue() << " 삭제" << endl;
	cout << queue.deQueue() << " 삭제" << endl;

	return 0;
}
