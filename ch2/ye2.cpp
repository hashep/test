#include <iostream>

int main()
{
    int k = 6;
    int *ak = &k;

    int *shit;

    std::cout << k << "\n"
              << ak << "\n"
              << shit << std::endl;

    double i = 4;
    double *kk = &i;

    void *lo = &kk;

    std::cout << kk << "\n"
              << lo << std::endl;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}