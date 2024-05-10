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

float TrimmedMean(const std::vector<int>& records, float percent = 0.3f)
{
	float fifteenPercent = (float)records.size() * (percent * 0.5f);
	int cuttingCount = round(fifteenPercent);

	float sum = 0.0f;
	for (size_t i = cuttingCount; i < records.size() - cuttingCount; i++)
		sum += records[i];

	return round(sum / (records.size() - cuttingCount * 2));
}

int main()
{
	int n = 0;
	std::cin >> n;

	if (n == 0)
	{
		std::cout << 0;
		return 0;
	}

	std::vector<int> records = {};
	for (size_t i = 0; i < n; i++)
	{
		int num = 0;
		std::cin >> num;
		records.push_back(num);
	}
	std::sort(records.begin(), records.end());
	
	float average = TrimmedMean(records);
	std::cout << (int)average;

	return 0;
}
