#include <iostream>

int main()
{
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, *r1 = &v1;
    const int *p2 = &v2;
    const int *p3 = &v2, *r2 = &v2;

    const int max_files = 20;
    const int limit = max_files + 1;

    std::cout << max_files << "\n"
              << limit << std::endl;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}