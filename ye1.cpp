#include <iostream>

int main()
{
    std::cout << "tlqkf\nyes"
              << " F\145rgus?\012 3.14e1L 1024f 3.14L" << std::endl;

    long double ld = 3.1415926536;
    int lb = 3.141592;
    double lc = 3.141592;
    int a(ld), b = {ld};
    int c{ld}, d = ld;

    std::cout << a << b << c << d << ld << lb << lc << std::endl;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return 0;
}