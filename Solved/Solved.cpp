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

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution 
{
public:
    int firstBadVersion(int n) 
    {
        long long int head = 0;
        long long int rear = n;
        long long int ans = INT_MAX;
        
        while(head <= rear)
        {
           long long int mid = (head + rear) / 2;
            if(isBadVersion(mid))
            {
                if(ans > mid)
                    ans = mid;
                
                rear = mid - 1;
            }
            else
            {
                head = mid + 1;
            }
        }
        return ans;
    }
};
// 머지 테스트
// 1
//2
int main()
{
	Solution s;
	cout << s.firstBadVersion(5) << endl;

	return 0;
}

