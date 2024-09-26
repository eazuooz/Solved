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
#include <list>
#include <stack>
#include <numeric>
#pragma endregion

using namespace std;

// reverse integer
 int reverse(int x)
{
	 int ans = 0;

	 while (x != 0)
	 {
		 int digit = x % 10;

		 if ( ans > INT_MAX / 10 
			 || ans < INT_MIN / 10 )
			 return 0;


		 ans = (ans * 10) + digit;
		 x = x / 10;
	 }

	 return ans;
}

int main()
{		  //2147483647
	reverse(1534236469);
		  //1056389759
	return 0;
}

