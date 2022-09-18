#include <iostream>
#include <string>;
using namespace std;

void classify(string name, int age, int weight);

int main() {
	string name;
	int age, weight;

	while (1) {
		cin >> name >> age >> weight;
		if (name == "#") break;

		classify(name, age, weight);
	}

	return 0;
}

void classify(string name, int age, int weight) {
	if (age > 17) {
		cout << name << " Senior\n";
	}
	else if (weight >= 80) {
		cout << name << " Senior\n";
	}
	else {
		cout << name << " Junior\n";
	}
}