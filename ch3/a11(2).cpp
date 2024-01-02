#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s;
    string gay("what");

    cout << s << endl;

    if (s.empty()) // s가 비어있다면
    {
        s = gay;
    }

    cout << s << endl; // what 출력

    // value check
    int blank;
    cin >> blank;
}