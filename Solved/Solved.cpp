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
#pragma endregion

using namespace std;

//Find the Index of the First Occurrence in a String
string longestCommonPrefix(vector<string>& strs)
{
	string ans = "";
	sort(strs.begin(), strs.end());
	int n = strs.size();
	string first = strs[0], last = strs[n - 1];

	for (int i = 0; i < min(first.size(), last.size()); i++) 
	{
		if (first[i] != last[i])
		{
			return ans;
		}

		ans += first[i];
	}
	return ans;
}


int main()
{	
	vector<string> strs = { "flower","flow","flight" /*"dog","racecar","car"*/};
	longestCommonPrefix(strs);
		  


	return 0;
}

