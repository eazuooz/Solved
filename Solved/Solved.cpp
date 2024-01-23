#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <sstream>
#include <unordered_map>


int main()
{
    int hour = 0;
    int minute = 0;

    std::cin >> hour >> minute;

    int totalMinute = 60 * hour + minute;
    totalMinute -= 45;

    const int oneDayMinute = 60 * 24;
    totalMinute < 0 ? totalMinute += oneDayMinute : totalMinute;

    std::cout << totalMinute / 60 
        << " " << totalMinute % 60;

    return 0;
}

