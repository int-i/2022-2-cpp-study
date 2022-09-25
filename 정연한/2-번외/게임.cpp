#include <iostream>
#include <vector>
#include <format>
#include <random>
using std::cin;
using std::cout;
using std::endl;

using std::locale;

using std::max;

using std::string;

using std::vector;

using std::format;

using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

mt19937 gen{ random_device{ }() };

// interface 정의
// 순수가상함수와 필드로만 이루어져있는 클래스
// 어차피 public에 있어야 되니까
// 보통 C++에서는 class 대신 struct를 쓴다.
struct 개체 {
	int 체력{ };
	int 마력{ };
	string 속성{ };

	virtual void 이동(int) = 0; // 순수가상함수

	virtual void 공격(개체*) = 0;
};

// 각 개체들이 존재할 세계
class 세계 {
public:
	// x축 크기, y축 크기
	// x*y 크기의 월드맵 생성
	// 랜덤한 위치에 돌이라든가 하는 장애물을 설치
	// 돌은 적당히 r 정도로 할까
	// 지나다닐 수 있는 길은 \0
	세계(int x, int y)
		: 월드맵(x, vector<char>(y)) {

		// 0~y까지 균등 분포 정의
		uniform_int_distribution<int> dis{ 0, y - 1 };

		for (int i{ }; i < y; ++i) {
			// 각 행마다 랜덤값을 설정해서 장애물 하나씩 추가
			int random{ dis(gen) };
			for (int j{ }; j < x; ++j) {
				if (random == j)
					월드맵[i][j] = 'r';
			}
		}

	}

	void 개체_추가() {
		uniform_int_distribution<int> dis{ 0, static_cast<int>(월드맵.size()) - 1 };
		int random{ dis(gen) };

		for (int i{ }; i < 월드맵.size(); ++i) {
			for (int j{ }; j < 월드맵.size(); ++j) {
				if (random == j) {
					월드맵[i][j] = 'e';
				}
			}
		}
	}

	void 개체_추가(int 위치) {

	}

	void 지도보기() {
		for (const auto& column : 월드맵) {
			for (const auto& row : column) {
				if (row == '\0')
					cout << "□";
				else
					cout << "■";
			}
			cout << endl;
		}
	}

private:
	// 월드맵은 2차원으로 구성
	vector<vector<char>> 월드맵;
};

class 플레이어 : public 개체 {
public:
	플레이어(int 체력, int 마력, string 닉네임, string 직업)
		: 닉네임{ 닉네임 }, 직업{ 직업 } {
		this->속성 = "플레이어";
		this->체력 = 체력;
		this->마력 = 마력;
	}

	void 이동(int n) override {
		cout << format("플레이어가 {}칸 이동하였습니다.", n) << endl;
	}

	void 공격(개체* e) override {
		cout << format("플레이어가 {}를 공격하였습니다.", e->속성) << endl;
	}

private:
	string 닉네임;
	string 직업;
};

class 몬스터 : public 개체 {
public:
	몬스터(int 체력, int 마력, string 종족)
		: 종족{ 종족 } {
		this->속성 = "몬스터";
		this->체력 = 체력;
		this->마력 = 마력;
	}

	void 이동(int n) override {
		cout << format("몬스터가 {}칸 이동하였습니다.", n) << endl;
	}

	void 공격(개체* e) override {
		cout << format("몬스터가 {}를 공격하였습니다.", e->속성) << endl;
	}

private:
	string 종족;
};

int main() {
	locale::global(locale{ "ko-KR.UTF-8" });
	// 지도 보기
	세계 지도{ 5, 5 };
	지도.개체_추가();
	지도.지도보기();


	개체* p1{ new 플레이어{ 10, 20, "연탄", "마법사" } };

	p1->이동(4);

	개체* e1{ new 몬스터{ 30, 10, "슬라임" } };
	p1->공격(e1);



	return 0;
}
