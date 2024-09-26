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
bool isPalindrome(string s) 
{
	string rev = "";
	for (size_t i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		ch = tolower(ch);
		if (isalnum(ch))
			rev.push_back(ch);
	}
	s = rev;
	reverse(rev.begin(), rev.end());

	if (rev == s)
		return true;

	return false;
}


int main()
{		  
	isPalindrome("A man, a plan, a canal: Panama"); //loveleetcode
		  
	return 0;
}

