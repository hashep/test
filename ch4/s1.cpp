#include <iostream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
    cout << 6 + 4 * 5 << endl;

    vector<int> vec{4, 5, 6, 7};

    if (!vec.empty())
    {
        cout << vec[0];
    }

    // value check
    int blank;
    cin >> blank;
}