#include <iostream>


double divide()
{
    double a = 0;
    double b = 0;

    std::cin >> a >> b;
    return a / b;
}

int main()
{
    double ret = divide();

    std::cout << std::fixed;
    std::cout.precision(9);

    std::cout << ret;

    return 0;
}

