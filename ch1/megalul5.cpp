#include <iostream>

int main()
{
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
    {
        sum += val;
    }

    std::cout << "shit is " << sum << std::endl;

    int man = 0;

    std::cout << man << std::endl;

    (man += 1);

    std::cout << man << std::endl;

    // check
    int check = 0;
    std::cin >> check;
    std::cout << std::endl;
}