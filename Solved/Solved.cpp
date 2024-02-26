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


//int arr[42];
//
//int main() {
//    int x;
//    int ans = 0;
//
//    for (int i = 0; i < 10; i++) {
//        scanf("%d", &x);
//        arr[x % 42] = 1;
//    }
//
//    for (int i = 0; i < 42; i++)
//        ans += arr[i];
//
//    printf("%d", ans);
//
//    return 0;
//}

int main()
{
    std::vector<int> inputs;
    inputs.resize(42);
    
    for (size_t i = 0; i < 10; i++)
    {
        int num = 0;
        std::cin >> num;
        inputs[num % 42]++;
    }

    int remain = 0;
    for (int num : inputs)
    {
        if (num == 0)
            continue;

        remain++;
    }
    
    std::cout << remain;

    return 0;
}

