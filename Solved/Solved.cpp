#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <list>
#include <stack>
#include <numeric>
#pragma endregion

using namespace std;

//Best Time to Buy and Sell Stock II
int maxProfit(vector<int>& prices) 
{
	int max = 0;
	int start = prices[0];
	for (int i = 1; i < prices.size(); i++) 
	{
		if (start < prices[i]) 
		{
			max += prices[i] - start;
		}

		start = prices[i];
	}

	return max;
}

int main()
{
	vector<int> prices = { 7,1,5,3,6,4 };

	//first 1buy 5sell
	//second 3buy 6sell
	//total sum = 7

	int output = maxProfit(prices);

	return 0;
}
