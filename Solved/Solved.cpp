#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>

int SquaredSum(std::vector<int>& numbers)
{
    int sum = 0;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        int squared = pow(numbers[i], 2);
        sum += squared;
    }

    return sum;
}

int main()
{
    std::vector<int> numbers = {};
    numbers.resize(5);

    for (size_t i = 0; i < numbers.size(); i++)
        std::cin >> numbers[i];

    int remainder = SquaredSum(numbers) % 10;

    std::cout << remainder;

    return 0;
}

