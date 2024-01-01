#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string str("as df");

    for (auto c : str)
    {
        cout << c << endl;
    }

    cout << str.size() << "\n"
         << str.length() << endl;

    // value check
    int blank;
    cin >> blank;
}