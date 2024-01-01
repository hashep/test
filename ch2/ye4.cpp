#include <iostream>

int main()
{
    int null = 0, *p = &null;

    std::cout << p << null << std::endl;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}