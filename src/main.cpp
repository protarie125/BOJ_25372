#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		string x;
		cin >> x;

		const auto& l = x.length();
		if (6 <= l && l <= 9) {
			cout << "yes\n";
		}
		else {
			cout << "no\n";
		}
	}

	return 0;
}