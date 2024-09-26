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

// Valid Anagram
bool isAnagram(string s, string t) \
{
	unordered_map<char, int> s1Map;
	for (char ch : s)
	{
		if (s1Map[ch] >= 0)
			s1Map[ch]++;
	}

	unordered_map<char, int> s2Map;
	for (char ch : t)
	{
		if (s2Map[ch] >= 0)
			s2Map[ch]++;
	}

	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (s1Map[ch] != s2Map[ch])
			return false;
	}

	return true;
}


int main()
{		  
	isAnagram("rat", "car"); //loveleetcode
		  
	return 0;
}

