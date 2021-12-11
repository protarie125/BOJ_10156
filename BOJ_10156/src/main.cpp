#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int k, n, m;
	cin >> k >> n >> m;

	auto d = (k * n) - m;
	if (0 < d) {
		cout << d;
	}
	else {
		cout << 0;
	}

	return 0;
}