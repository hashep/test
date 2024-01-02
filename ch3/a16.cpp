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
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto &i : v)
    {
        i *= i;
    }

    for (auto i : v)
    {
        cout << i << " " << endl;
    }

    // value check
    int blank;
    cin >> blank;
}