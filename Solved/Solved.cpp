#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

char GetManyUseAlphabet(std::string& str)
{
    std::vector<int> bucket = {};
    bucket.resize(256);

    for (size_t i = 0; i < str.length(); i++)
    {
        int idx = static_cast<int>(str[i]);
        if (str[i] >= 'a')
        {
            idx -= 32;
        }

        bucket[idx]++;
    }

    char alphabet = max_element(bucket.begin(), bucket.end()) - bucket.begin();
    
    int count = std::count(bucket.begin(), bucket.end(), bucket[alphabet]);
    if (count >= 2)
        alphabet = '?';

    return alphabet;
}

int main()
{
    std::string str = "";
    std::getline(std::cin, str);
    
    std::cout << GetManyUseAlphabet(str) << "\n";

    return 0;
}

