#include <iostream>
#include <vector>
using std::cin;
using std::cout;
constexpr auto endl{ '\n' };

using std::vector;

constexpr auto NumberOfMember{ 6 };

auto main() -> int {
	cin.tie(nullptr)->sync_with_stdio(false);
	vector<int> chessPieces(NumberOfMember);

	for (auto& elem : chessPieces)
		cin >> elem;

	[](vector<int> chessPieces) {
		cout << 1 - chessPieces[0] << endl
			<< 1 - chessPieces[1] << endl
			<< 2 - chessPieces[2] << endl
			<< 2 - chessPieces[3] << endl
			<< 2 - chessPieces[4] << endl
			<< 8 - chessPieces[5] << endl;
	}(chessPieces);

	return 0;
}
