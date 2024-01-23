#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>


int main()
{
    int year = 0;
    std::cin >> year;

    bool leapYear = false;
    bool multiplesOf4 = false;
    bool multiplesOf100 = false;
    bool multiplesOf400 = false;

    year % 4 == 0 ? multiplesOf4 = true : multiplesOf4 = false;
    year % 100 == 0 ? multiplesOf100 = true : multiplesOf100 = false;
    year % 400 == 0 ? multiplesOf400 = true : multiplesOf400 = false;

    if (multiplesOf4 && !multiplesOf100)
        leapYear = true;

    if (multiplesOf100 && multiplesOf400)
        leapYear = true;
    

    if (leapYear)
        std::cout << 1;
    else
        std::cout << 0;

    return 0;
}

