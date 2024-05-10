#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <stack>
#include <numeric>
#pragma endregion

int main()
{
	int n = 0;
	std::cin >> n;
	float fifteenPercent = (float)n * 0.15f;
	int cuttingCount = round(fifteenPercent);

	if (n == 0)
	{
		std::cout << 0;
		return 0;
	}

	std::vector<int> vector = {};
	for (size_t i = 0; i < n; i++)
	{
		int num = 0;
		std::cin >> num;
		vector.push_back(num);
	}

	std::sort(vector.begin(), vector.end());
	
	float sum = 0.0f;
	for (size_t i = cuttingCount; i < n - cuttingCount; i++)
	{
		sum += vector[i];
	}
	
	float average = round(sum / (n - cuttingCount * 2));
	std::cout << (int)average;

	return 0;
}
