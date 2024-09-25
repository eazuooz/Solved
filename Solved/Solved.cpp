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

// Valid sudoku
bool isValidSudoku(vector<vector<char>>& board)
{
	for (size_t y = 0; y < board.size(); y+=3)
	{
		for (size_t x = 0; x < board[y].size(); x+=3)
		{
			static int direct[9][2] =
			{
				0, 0,
				0, 1,
				0, 2,
				1, 0,
				1, 1,
				1, 2,
				2, 0,
				2, 1,
				2, 2,
			};
			unordered_map<char, int> map = {};

			for (size_t i = 0; i < 9; i++)
			{
				int dy = y + direct[i][0];
				int dx = x + direct[i][1];

				char key = board[dy][dx];
				if (key == '.')
					continue;
				
				for (size_t j = 0; j < 9; j++)
				{
					if (board[dy][j] == key && dx != j)
						return false;
					if (board[j][dx] == key && dy != j)
						return false;
				}

				if (map[key] >= 0)
					map[key]++;

				if (map[key] > 1)
					return false;
			}
		}
	}

	return true;
}

int main()
{
	vector<vector<char>> board =
		//{ {'5', '3', '.', '.', '7', '.', '.', '.', '.'}
		//, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}
		//, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}
		//, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}
		//, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}
		//, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}
		//, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}
		//, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}
		//, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

		{ {'.','.','4','.','.','.','6','3','.'}
		 ,{'.','.','.','.','.','.','.','.','.'}
		 ,{'5','.','.','.','.','.','.','9','.'}
		 ,{'.','.','.','5','6','.','.','.','.'}
		 ,{'4','.','3','.','.','.','.','.','1'}
		 ,{'.','.','.','7','.','.','.','.','.'}
		 ,{'.','.','.','5','.','.','.','.','.'}
		 ,{'.','.','.','.','.','.','.','.','.'}
		 ,{'.','.','.','.','.','.','.','.','.'} };


	isValidSudoku(board);

	return 0;
}

