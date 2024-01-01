#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int a = 2;
    int *p = &a;

    cout << p << &a << "\n"
         << *p << a << "\n"
         << &p << "\n"
         << a << "\n"
         << &a << endl;

    p = &a;

    cout << p << &a << endl;

    int *p = &a;

    // value check
    int blank;
    cin >> blank;
}