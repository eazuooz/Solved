#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>


int main()
{
    std::string nodes = "";
    for (int i = 0; i < 8; i++)
    {
        char ch = 0;
        std::cin >> ch;
        nodes.push_back(ch);
    }

    if (nodes == "12345678")
        std::cout << "ascending";
    else if (nodes == "87654321")
        std::cout << "descending";
    else
        std::cout << "mixed";
    
    return 0;
}

