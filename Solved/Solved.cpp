#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

void PrintStars(int count)
{
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
        PrintStars(i + 1);
    }

    return 0;
}

