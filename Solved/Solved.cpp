#include <iostream>

int Add()
{
    int a = 0;
    int b = 0;

    std::cin >> a >> b;

    return a + b;
}

int main()
{
    int ret = Add();
    std::cout << ret;

    return 0;
}

