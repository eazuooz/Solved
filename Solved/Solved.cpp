#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>

void PrintNumberCount(std::vector<int>& numbers)
{
    int sum = 1;
    for (size_t i = 0; i < numbers.size(); i++)
        sum *= numbers[i];

    std::string numbersStr = std::to_string(sum);

    std::vector<int> bucket = {};
    bucket.resize(10);
    
    for (size_t i = 0; i < numbersStr.length(); i++)
    {
        int idx = numbersStr[i] - '0';
        bucket[idx] += 1;
    }

    for (size_t i = 0; i < bucket.size(); i++)
        std::cout << bucket[i] << "\n";

    return;
}

int main()
{
    std::vector<int> numbers = {};
    numbers.resize(3);

    for (size_t i = 0; i < numbers.size(); i++)
        std::cin >> numbers[i];

    PrintNumberCount(numbers);

    return 0;
}

