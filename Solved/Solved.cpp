#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>

std::string PrintRepeatString(const std::string& str, const int repeatCount)
{
    std::string resultStr = "";
    for (size_t j = 0; j < str.length(); j++)
    {
        for (size_t k = 0; k < repeatCount; k++)
            resultStr.push_back(str[j]);
    }

    return resultStr;
}

int main()
{
    int loopCount = 0;
    std::cin >> loopCount;


    std::vector<std::string> results = {};
    for (size_t i = 0; i < loopCount; i++)
    {
        int repeatCount = 0;
        std::cin >> repeatCount;

        std::string str = "";
        std::cin >> str;

        std::string retStr = PrintRepeatString(str, repeatCount);
        results.push_back(retStr);
    }

    for (std::string& str : results)
    {
        std::cout << str << "\n";
    }

    return 0;
}

