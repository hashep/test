#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string word;
    vector<string> text;

    while (cin >> word)
    {
        text.push_back(word);
    }

    // value check
    int blank;
    cin >> blank;
}