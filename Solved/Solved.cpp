#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>


int main()
{
    int number = 0;
    std::cin >> number;

    for (size_t i = 0; i < number; i++)
    {
        std::cout << i + 1 << "\n";
    }

    return 0;
}

