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

    for (size_t i = 0; i < 9; i++)
    {
        std::cout << number << " * " << i + 1;
        std::cout << " = " << number * (i + 1);
        std::cout << "\n";
    }

    return 0;
}

