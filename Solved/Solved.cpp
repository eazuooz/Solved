#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void PrintStars(int count, int lineCount)
{
    for (size_t i = 0; i < lineCount - count; i++)
    {
        std::cout << ' ';
    }

    for (size_t i = 0; i < count; i++)
    {
        std::cout << '*';
    }
    std::cout << "\n";
}

int main()
{
    int lineCount = 0;
    std::cin >> lineCount;

    for (size_t i = 0; i < lineCount; i++)
    {
        PrintStars(i + 1, lineCount);
    }

    return 0;
}

