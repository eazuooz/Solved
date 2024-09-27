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

// String to Integer (atoi)
int myAtoi(string s)
{
	long long int ans = 0;
	int i = 0;

	// Skip leading whitespaces
	while (s[i] == ' ') 
		i++;

	int sign = 0;   // 0 -> + , 1 -> -

	// Handle signs
	if (s[i] == '-') 
	{
		sign = 1;
		i++;
	}
	else if (s[i] == '+') 
	{
		sign = 0;
		i++;
	}

	// Skip leading zeros
	while (s[i] == '0') 
		i++;

	// Convert characters to integer
	while (s[i] >= '0' && s[i] <= '9') 
	{
		if (ans > INT_MAX) 
		{
			if (sign) 
				return INT_MIN;

			return INT_MAX;
		}

		ans = ans * 10 + s[i] - '0';
		i++;
	}

	// Apply sign
	if (sign) 
		ans *= -1;

	// Handle overflow/underflow
	if (ans > INT_MAX) return INT_MAX;
	if (ans < INT_MIN) return INT_MIN;

	return (int)ans;
}


int main()
{		  
	myAtoi("+-12");
		  
	int a = atoi("0-1");

	return 0;
}

