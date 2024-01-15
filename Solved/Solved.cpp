#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


int main()
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;
    if (a > b)
    {
        std::cout << ">" << "\n";
    }
    else if (a < b)
    {
        std::cout << "<" << "\n";
    }
    else
    {
        std::cout << "==" << "\n";
    }

    return 0;
}

