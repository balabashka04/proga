#include <iostream>

int main() {
	int n = 0, k = 0;
	std::cin >> n >> k;
	int M = -1000000000;
	for (int i = 0; i < n; i++) {
		int f = 0, t = 0;
		std::cin >> f >> t;
		if (t <= k && M < f) {
			M = f;
		}
		if (t > k && M < f - (t - k)) {
			M = f - (t - k);
		}

	}
	std::cout << M;
}
