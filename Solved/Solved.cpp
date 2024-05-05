#pragma region LIB
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>
#pragma endregion

char CalculateScore(const int score)
{
    if (score >= 60 && score <= 69)
		return 'D';
	if (score >= 70 && score <= 79)
		return 'C';
	if (score >= 80 && score <= 89)
		return 'B';
	if (score >= 90 && score <= 100)
		return 'A';
		
	return 'F';
}

int main()
{
    int score = 0;
    std::cin >> score;

    char grade = CalculateScore(score);
	std::cout << grade;

    return 0;
}

