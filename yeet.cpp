#include <iostream>

int main()
{
    int i = 42;
    if (i)
    {
        i = 0;
        std::cout << i;
    }

    // for check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}