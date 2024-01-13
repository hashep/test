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
    cout << sizeof true << endl;  // 1
    cout << sizeof false << endl; // 1
    cout << "" << endl;

    int a, b;
    bool A;

    cin >> a >> b;
    cout << "" << endl;

    if (a > b)
    {
        A = true; // 1
    }
    else
    {
        A = false; // 0
    }

    cout << "A = " << A << endl;

    // value check
    int blank;
    cin >> blank;
}