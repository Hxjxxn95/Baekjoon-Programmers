#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	// 1 ≤ N ≤ 1,000,000
	int N;
	std::cin >> N;

    // N 개의 숫자 입력
	std::vector<int> v(1000001);
	for (int i = 0; i < N; ++i) {
		// |n| <= 1,000,000
		std::cin >> v[i];
	}

    // 정렬
	std::sort(v.begin(), v.begin() + N, std::less());

    // 결과 출력
	for (auto i = 0; i < N; ++i) {
		std::cout << v[i] << '\n';
	}

	return 0;
}
