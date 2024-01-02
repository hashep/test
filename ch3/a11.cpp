#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("shit");

    cout << s << endl;

    if (!s.empty()) // s가 비어있지 않다면
    {
        s[0] = toupper(s[1]);
    }

    cout << s << endl;

    // value check
    int blank;
    cin >> blank;
}