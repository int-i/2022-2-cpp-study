#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using std::string;

// ����Ʈ��-������
// ����Ʈ��-������

// �θ� Ŭ����
class ����Ʈ�� {
public:
	����Ʈ��(int storage, int price, int no_cam, string product_name): storage(storage), price(price), no_cam(no_cam), product_name(product_name) { }

	void Ư¡() { 
		cout << "111" << endl;
	}

private:
	int storage;
	int price;
	int no_cam;
	string product_name;
};

class ������ : public ����Ʈ�� {
private:
	int ios_version;
	string charger_type;

public:
	������(int ios_version, string charger_type) : ����Ʈ��(128, 1000, 3, "12"), ios_version(ios_version), charger_type(charger_type) { }
	// ������ �����ε�
	������(int storage, int price, int no_cam, string product_name, int ios_version, string charger_type)
		: ����Ʈ��(storage, price, no_cam, product_name), ios_version(ios_version), charger_type(charger_type) { }

	void Ư¡() {
		cout << "���� ����" << endl;
	}

};



int main() {
	����Ʈ��(64, 100, 5, "10").Ư¡();
	������(12, "5pin").Ư¡();

	return 0;
}

