#include "mycat.h"
using namespace std;

class REO :public mycat {
public:
	REO():mycat{"G",false, true} {}
	void display() override { cout << "�����Դϴ�." << endl; };
};
class OZ :public mycat {
	OZ():mycat{"B",true, false} {}
	void display() override { cout << "�����Դϴ�." << endl; };
};