#include <iostream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    int a = 10;
    int &b = a; // a == b
    int &c = b; // a == b == c

    cout << a << endl;
    cout << &a << endl;
    cout << b << endl;
    cout << &b << endl;
    cout << c << endl;
    cout << &c << endl;

    // value check
    int blank;
    cin >> blank;
}