#include <iostream>
#include <string>
#include <typeinfo>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    const string hexdigits = "0123456789ABCDEF";
    string result;       // string result
    string::size_type n; // => string n, n타입은 size_type

    cout << hexdigits << endl;
    cout << hexdigits.size() << endl;
    cout << result << endl;
    cout << n << endl;

    while (cin >> n)
    {
        if (n < hexdigits.size())
        {
            result += hexdigits[n];
        }
    }

    cout << result << endl;

    // value check
    int blank;
    cin >> blank;
}