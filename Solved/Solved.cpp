#include <iostream>
#include <string>

int GetWordCount(std::string str)
{
    int count = 1;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            count++;
    }

    if (str[0] == ' ')
        count--;

    if (str[str.length() - 1] == ' ')
        count--;

    return count;
}

int main()
{
    std::string str = "";
    std::getline(std::cin, str);
    
    std::cout << GetWordCount(str) << "\n";

    return 0;
}

