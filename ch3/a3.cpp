#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2 << endl;

    string word;
    while (cin >> word)
    {
        cout << word << endl;
    }

    // value check
    int blank;
    cin >> blank;
}