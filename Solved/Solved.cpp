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

// First Unique Character in a String
int firstUniqChar(string s) 
{
	unordered_map<char, int> map;
	for (size_t i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		
		if (map[ch] >= 0)
			map[ch]++;
	}

	for (size_t i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		
		if (map[ch] == 1)
			return i;
	}

	return -1;
}


int main()
{		  
	firstUniqChar("loveleetcode"); //loveleetcode
		  
	return 0;
}

