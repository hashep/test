#include <iostream>

int main()
{
    int sum = 11, val = 10;
    while (sum > 0)
    {
        --sum;
        std::cout << sum << std::endl;
    }

    // check
    int check = 0;
    std::cin >> check;
    std::cout << std::endl;
}