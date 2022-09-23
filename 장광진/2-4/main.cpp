#include <iostream>
#include <string>
using namespace std;

class String {
public:
	String(string s) {
		this->s = s;
	}

	String operator+(String s1) {
		return String(s.append(s1.s));
	}

	friend ostream& operator<<(ostream& cout, const String& s) {
		cout << s.s;
		return cout;
	}
private:
	string  s;
};

int main() {
	String s1("He");
	String s2("llo");
	String s3(s1.operator+(s2));

	cout << s3 << endl;
}