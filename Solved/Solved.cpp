#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <unordered_map>
#include <stack>
#pragma endregion

std::pair<int, int> fibonacci(int n)
{
	std::pair<int, int> dp[41] = { {1,0}, {0,1}, };
	for (size_t i = 2; i <= n; i++)
	{
		dp[i].first = dp[i - 1].second;
		dp[i].second = dp[i - 1].first + dp[i - 1].second;
	}

	return std::make_pair(dp[n].first, dp[n].second);
}

int main()
{
	int testCase = 0;
	std::cin >> testCase;
	for (size_t i = 0; i < testCase; i++)
	{
		int num = 0;
		std::cin >> num;
		std::pair<int, int> ret = fibonacci(num);

		std::cout << ret.first << " " << ret.second << "\n";
	}

	return 0;
}

