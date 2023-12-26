#include <iostream>

int main()
{
    unsigned u = 10;
    int i = -42;
    std::cout << i + i << std::endl;
    std::cout << u + i << std::endl;

    unsigned u1 = 42, u2 = 17;
    std::cout << u1 - u2 << std::endl;
    std::cout << u2 - u1 << std::endl;
    std::cout << "" << std::endl;

    std::cout << u - i << std::endl;
    std::cout << u - u - u << std::endl;
    std::cout << i + u1 + u2 << std::endl;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}