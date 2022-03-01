#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int x;
	cin >> x;

	auto ans = x / 5;
	if (0 < x % 5) {
		ans += 1;
	}

	cout << ans;

	return 0;
}