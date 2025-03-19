#pragma region LIB
#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <numeric>
#include <queue>
#pragma endregion

using namespace std;

//lsf (Least So Far): 지금까지 나온 가장 작은 주가를 저장하는 변수입니다.
//op (Overall Profit): 지금까지 가능한 최대 이익을 저장하는 변수입니다.
//pist (Profit If Sold Today): 오늘 주식을 판다면 얻을 수 있는 이익을 계산하는 변수입니다.

//i	prices[i]	lsf (최소 주가)	pist (이익)	op (최대 이익)
//0	7	7	0	0
//1	1	1	0	0
//2	5	1	4	4
//3	3	1	2	4
//4	6	1	5	5
//5	4	1	3	5
//💡 최대 이익은 5 (1에 사서 6에 팔기)입니다.

int maxProfit(vector<int>& prices)
{
	int lsf = INT_MAX;
	int op = 0;
	int pist = 0;

	for (int i = 0; i < prices.size(); i++)
	{
		if (prices[i] < lsf)
		{
			lsf = prices[i];
		}

		pist = prices[i] - lsf;

		if (op < pist)
		{
			op = pist;
		}
	}

	return op;
}


int main()
{
	vector<int> prices = { 7, 1, 5, 3, 6, 4 };
	cout << maxProfit(prices) << endl;

	return 0;
}

