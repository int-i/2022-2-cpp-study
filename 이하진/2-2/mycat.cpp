#include "mycat.h"
using namespace std;

class REO :public mycat {
public:
	REO():mycat{"G",false, true} {}
	void display() override { cout << "레오입니다." << endl; };
};
class OZ :public mycat {
	OZ():mycat{"B",true, false} {}
	void display() override { cout << "오즈입니다." << endl; };
};