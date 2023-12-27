#include <iostream>

int main()
{
    const int a = 512;
    double dval = 3.14;
    const int temp = dval;
    const int *ri = &temp;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}