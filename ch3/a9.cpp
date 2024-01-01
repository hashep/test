#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string say("hewo wowd");

    for (auto &c : say)
    {
        c = toupper(c);
    }

    cout << say << endl;

    // value check
    int blank;
    cin >> blank;
}