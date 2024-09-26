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

// Rotate image
void rotate(vector<vector<int>>& matrix)
{
	int row = matrix.size();

	for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = i + 1; j < row; j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		reverse(matrix[i].begin(), matrix[i].end());
	}
}

int main()
{
	vector<vector<int>> matrix = { {1,2,3},{4,5,6},{7,8,9} };
	rotate(matrix);

	return 0;
}

