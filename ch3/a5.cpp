#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string line;

    while (getline(cin, line))
    {
        if (line.size() > 80)
        {
            cout << line << endl;
        }
    }

    // value check
    int blank;
    cin >> blank;
}