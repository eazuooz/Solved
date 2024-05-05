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

void printSum(const std::string& input)
{
    int sum = 0;
    int value = 1;
    for (size_t i = 0; i < input.size(); i++)
    {
        char ch = input[i];
        if (ch == 'O')
        {
            sum += value;
            value++;
        }
        else
        {
            value = 1;
        }
    }

    std::cout << sum << "\n";
}

int main()
{
    int count = 0;
    std::cin >> count;

    for (size_t i = 0; i < count; i++)
    {
        std::string input = "";
        std::cin >> input;
        printSum(input);
    }

    return 0;
}
