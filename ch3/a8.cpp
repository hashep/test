#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string say("helo worldnananaa!@#!@#");
    decltype(say.size()) punct_cnt = 0;

    for (auto c : say)
    {
        if (ispunct(c))
        {
            ++punct_cnt;
        }
    }

    cout << punct_cnt << " punctuation chars in " << say << endl;

    // value check
    int blank;
    cin >> blank;
}