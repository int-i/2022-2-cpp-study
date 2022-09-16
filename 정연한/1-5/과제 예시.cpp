#include <iostream>
#include <vector>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

using std::vector;

int main() {
	cin.tie(nullptr)->sync_with_stdio(false);
	auto input{ [temp{ 0 }]() mutable { return cin >> temp, temp; } };

	const auto N{ input() };
	double M{ };
	vector<double> list(N);
	for (auto& elem : list) {
		elem = input();
		if (M < elem)
			M = elem;
	}

	cout <<
		[=, temp{ 0.0 }]() mutable {
		for (int i{ }; i < N; ++i) {
			list[i] *= 100 / M;
			temp += list[i];
		}
		return temp / N;
	}()
		<< endl;

	return 0;
}
