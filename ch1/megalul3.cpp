#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        ++val;
    }
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;

    // check
    int check = 0;
    std::cin >> check;
    std::cout << std::endl;
    return 0;
}