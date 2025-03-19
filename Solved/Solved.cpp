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

//🔸 점화식 적용 (Bottom-Up)
//cpp
//복사
//편집
//for(int i = 1; i <= n; i++) {
//    dp[i] = dp[i-1];  // 한 칸 올라온 경우
//    if(i > 1)
//        dp[i] += dp[i-2];  // 두 칸 올라온 경우
//}
//dp[i] = dp[i-1]: (i-1)번째 계단에서 한 칸 올라왔을 때
//dp[i] += dp[i-2]: (i-2)번째 계단에서 두 칸 올라왔을 때
//즉, 점화식:
//
//dp[i] = dp[i-1] + dp[i-2]
//
//🔹 예제 실행 (n=5)
//i	dp[i-2]	dp[i-1]	dp[i] = dp[i-1] + dp[i-2]
//1	X	1	1
//2	1	1	2
//3	1	2	3
//4	2	3	5
//5	3	5	8

int climbStairs(int n)
{
	vector<int> dp(n + 1, 0);
	dp[0] = 1;

	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[i - 1];

		if (i > 1)
			dp[i] += dp[i - 2];
	}

	return dp[n];
}


int main()
{
	climbStairs(5);

	return 0;
}

