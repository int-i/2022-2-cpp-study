#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using std::string;

// 스마트폰-갤럭시
// 스마트폰-아이폰

// 부모 클래스
class 스마트폰 {
public:
	스마트폰(int storage, int price, int no_cam, string product_name): storage(storage), price(price), no_cam(no_cam), product_name(product_name) { }

	void 특징() { 
		cout << "111" << endl;
	}

private:
	int storage;
	int price;
	int no_cam;
	string product_name;
};

class 아이폰 : public 스마트폰 {
private:
	int ios_version;
	string charger_type;

public:
	아이폰(int ios_version, string charger_type) : 스마트폰(128, 1000, 3, "12"), ios_version(ios_version), charger_type(charger_type) { }
	// 생성자 오버로딩
	아이폰(int storage, int price, int no_cam, string product_name, int ios_version, string charger_type)
		: 스마트폰(storage, price, no_cam, product_name), ios_version(ios_version), charger_type(charger_type) { }

	void 특징() {
		cout << "갬성 쥑임" << endl;
	}

};



int main() {
	스마트폰(64, 100, 5, "10").특징();
	아이폰(12, "5pin").특징();

	return 0;
}

