#include <iostream>
#include <format> // c++20으로 컴파일 해주어야 한다.
#include <array>
#include <algorithm>
#include <random>
#include <chrono>
using std::cin;
using std::cout;
using std::endl;

using std::format;

using std::array;

using std::find;
using std::distance;

using std::random_device;
using std::mt19937_64;
using std::uniform_int_distribution;

using std::chrono::system_clock;
using std::chrono::microseconds;
using std::chrono::duration_cast;

// 자료구조 - 자료구조와 시간 복잡도
// 자료구조는 프로그래밍에서 데이터를 구조적으로 표현하는 방식과
// 이를 구현하는데 필요한 알고리즘에 대해 논하는 기초 이론이다.
// 
// 구조적이란? 부분이나 요소가 짜여서 하나의 전체를 이루는 것.
// 알고리즘이란? (일반적으로 사용되는 의미로) 문제를 해결하기 위한 절차나 방법.
// 
// 따라서 다시 해석하자면, 자료구조란?
// 프로그래밍에서, 여러 데이터들을, 정해진 규칙에 따라 모아, 하나의 전체를 이루게 하는 방식
// 그리고 이 것을 코드를 짜서 만들기 위한 방법에 대해 논하는 기초 이론
// 이 두 가지의 의미를 가진다.
// 
// 
// 시간 복잡도는 입력값에 따른 연산 시간이 얼마나 걸리는지 나타내는 척도이다.
// 이때 연산 시간은 몇 초, 몇 분 이런식으로 나타내지 않고,
// 점근 표기법 이라는 것을 사용해 표기한다.
// 
// 점근 표기법이란? 어떤 알고리즘의 수행 단계를 추상적으로 표기하는 방법으로,
// 주로 O(대문자 O)를 사용해 표기하는 big-O notation을 통해 표기한다.
// 
// 추상적이란? 클래스에서 배웠던 추상화(여러 사물 또는 개념에서 공통되는 특성을 추출하여 파악)
// 에서 뜻이 파생되어, 구체성이 없이 사실이나 현실에서 멀어져 막연하고 일반적인 것을 의미한다.
// 
// 결국 구체적의 반대 의미인데, 그렇다면 시간 복잡도는 연산 시간을 구체적으로 표기하지 않는가?
// 정답은 그렇다 이다.
// 
// 그 이유는, 프로그램이 돌아가는 정확한 단계의 수를 결정하는 작업은 매우 어려울 뿐더러,
// 그걸 신경 쓸 사람은 아무도 없기 때문이다.
// 
// 여기서 단계란, 한번에 수행되는 명령문 정도의 의미로,
// 같은 한 단계라도, x=y와 x=y+z+(x/y)+(x*y*z-x/z) 이 둘은 딱 봐도 전혀 다른 연산 시간을 가진다.
// 
// 따라서 시간 복잡도는 '해당 연산은 대략적으로 최대 이 정도의 단계를 거칠 것이다.' 를 의미하며,
// 정확한 연산 시간은 나타내지 않는다.
// 
// 
// 자, 그렇다면 그 대략적인 단계를 어떻게 나타내느냐,
// 위에서 말했듯 대문자 O를 통해서 나타낸다.
// 예를 들어 아래와 같은 코드가 있다고 가정하자.
// for (int i = 0; i < n; ++i) cout << n << endl;
// 
// 위의 코드를 보면 i가 n만큼 반복을 하면서 n의 값을 출력하고 있다.
// 이 때, 연산의 횟수는 대략 n회일 것이다.
// 따라서 이를 점근 표기법으로 표기하면 O(n)이 된다.
// 근데 생각해보면 뭔가 좀 이상하다.
// 
// for문의 선언부에서 i를 선언하는 것도 하나의 연산이고, (+ 1)
// 반복을 위해 매번 i가 n보다 작은지 체크하는 것도 하나의 연산이고, (+ n)
// i를 매 반복마다 1씩 증가시키는 것도 하나의 연산인데, (+ n)
// 이러면 O(n)이 아니라 O(3n + 1)이 되어야 하는게 아닌가?
// 
// 결론부터 말하자면, 시간 복잡도에서는 이런 자잘한 항은 신경쓰지 않는다.
// O(3n + 1)에서 n의 값이 아주 커져서 10억개의 데이터가 들어왔다고 가정하자,
// 그럼 3,000,000,001이 될텐데, 30억이나 30억 1이나 연산 시간에 있어 별 차이가 없을 것이다.
// 
// 따라서 n^1보다 작은 항인 + 1은 전체 실행시간에서 큰 의미가 없는 항이고,
// n앞에 붙어있는 계수 역시 n이 커지면 커질수록 영향력이 작아질 것이다.
// 
// 따라서 계수는 신경쓰지 않고, n이 1씩 증가될 때마다 연산 시간이 커지는 비율만 생각했을 때
// 여전히 n과 같은 비율(선형 시간)로 증가하고 있으므로,
// O(3n + 1)은 O(n)에 비례하고, 따라서 O(n)으로 표기한다.
// 
// 또 다른 예제를 하나만 더 보자
// O(3n^2 + 8n + 12)가 있을 때, 최고차항을 제외한 나머지는 n값이 아주 커졌을 때,
// 연산 시간에 유의미한 차이를 주지 않으므로 제외,
// 3n^2의 계수 역시 n 값이 아주 커졌을 때 n^2이라는 비율에 영향을 미치지 않기 때문에 제외
// 따라서 O(n^2)에 비례한다.
// 
// 증가되는 시간(비율)에는 선형 시간 이외에 로그 시간, 다항 시간, 지수 시간 등이 있지만,
// 그것들은 알고리즘을 공부할 때 좀 더 자세히 알아보도록 하고,
// 지금은 상수 시간(O(1)), 선형 시간(O(n)), 2차 시간(O(n^2)) 정도만 알고 넘어가면 된다.
// 



int main() {
	// 새 자료구조를 알아보기에는 시간 복잡도 하나만 해도 충분히 오래걸렸기 때문에
	// 이번 시간은 기존에 배웠던 배열의 STL버전에 대해서 알아보도록 하자.
	// STL은 스탠다드 템플릿 라이브러리의 약자로,
	// C++로 구현된 자료구조, 알고리즘 등등이 들어있는 라이브러리다.
	// 이름에서 알 수 있듯, 템플릿으로 구현되어있어, 어떤 자료형이든 해당 자료구조에 넣을 수 있다.

	// 템플릿으로 구현 된 클래스나 함수에서,
	// 꺾쇠 괄호 안에 넣는 인자를 템플릿 인자라고 한다.
	// 아래는 int와 5을 넣었는데,
	// 이 경우 int를 요소로 가지고, 크기가 5인 배열을 선언하게 된다.
	// 배열 선언자[]와는 비슷하면서도 다르다.
	// 기본적으로는 이렇게 초기화 리스트 방식을 사용해 초기화를 한다.
	array<int, 5> arr1 = { 1, 2, 3, 4, 5 };

	// 또한 이런식으로 유니폼 초기화 방식을 사용해 초기화 할 수도 있다.
	array<int, 5> arr2{ 6, 7, 8, 9, 10 };



	// 아주 큰 배열을 선언하기 위해 동적할당을 통해 heap 영역에 array를 선언
	// 이를 통해 크기가 1천만인 배열을 선언할 수 있다.
	auto& testArray{ *new array<int, 10'000'000>{ } };

	// 배열에 랜덤값을 넣어주기 위한 랜덤값 생성기
	mt19937_64 gen{ random_device{ }() };
	uniform_int_distribution<int> dis{ 0, 10'000'000 }; // 0 ~ 1천만 까지의 균등 분포 선언

	for (auto& elem : testArray)
		elem = dis(gen);

	cout << "testArray 초기화 완료" << endl << endl;

	// 이렇게 선언된 배열은 배열 선언자[]를 통해 선언 된 배열과 동일하게 사용할 수 있다.


	// 배열의 여러 연산들의 시간복잡도를 알아보자.
	// 
	// 접근: 접근은 배열 내의 n번 인덱스의 값을 찾는 연산이다.
	// 이때 배열은 O(1)의 시간 복잡도를 갖는다.
	// 첫번째 값부터 순차적으로 찾아가는 것이 아니라,
	// 인덱스 번호만 알고 있다면 해당 위치에 바로 접근이 가능 하다는 것

	auto start{ system_clock::now() };
	// 접근은 그냥 배열 연산자[]를 쓰면 된다.
	cout << "testArray의 100만번 인덱스의 값: " << testArray[1'000'000] << endl;
	auto end{ system_clock::now() };

	cout << format("접근에 걸린 시간: {}μs", duration_cast<microseconds>(end - start).count()) << endl;



	// 탐색: 접근은 인덱스 번호를 알고 있으니 한번에 접근이 가능했지만,
	// 탐색은 우리가 찾고자 하는 값을 하나하나 순차적으로 탐색해야 한다.
	// 따라서 배열의 원소 개수가 n개라면, 최대 O(n)의 시간 복잡도를 갖는다.

	// 검색을 위한 임의의 값
	auto temp = testArray[9];

	start = system_clock::now();
	// find 함수: testArray의 가장 첫번째 원소부터 끝 원소까지 temp 값이 존재하는지 탐색
	// 존재한다면 해당 위치의 iterator를 반환
	auto location{ find(testArray.begin(), testArray.end(), temp) };
	// distance 함수: testArray의 가장 첫번째 원소부터 위에서 찾은 위치까지의 거리를 반환
	cout << "testArray에 temp값이 어디에 존재하는가: " << distance(testArray.begin(), location) << endl;
	end = system_clock::now();

	cout << format("탐색에 걸린 시간: {}μs", duration_cast<microseconds>(end - start).count()) << endl;



	// 대입: 접근 연산 수행 후 해당 메모리에 다른 값을 대입한다
	// 이 때, 접근 연산과 대입 연산은 둘 다 상수 시간에 처리 되므로 O(1)
	// * C++ std::array의 특성상 삽입과 삭제는 여기선 다루지 않는다.

	start = system_clock::now();
	testArray[9'000'000] = 1000;
	cout << "testArray의 900만번 인덱스의 값: " << testArray[9'000'000] << endl;
	end = system_clock::now();

	cout << format("대입에 걸린 시간: {}μs", duration_cast<microseconds>(end - start).count()) << endl;


	// 자, 이처럼 실제 작동 시간에서도 배열에서 접근과 대입은 O(1),
	// 탐색은 O(n)이 걸리는 것을 알 수 있다.

	delete[] & testArray;

	return 0;
}
