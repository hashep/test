#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::ends;
using std::flush;
using std::ifstream;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    int a = 5 % 2; // 1
    int b = 6 % 2; // 0
    int c = 7 % 2; // 1
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    vector<int> wat = {0, 1, 2, 3, 4, 5};

    for (int k = 0; k < wat.size(); k++)
    {
        cout << wat[k] << endl;
    }

    wat.clear();

    for (int k = 0; k < wat.size(); k++)
    {
        cout << wat[k] << endl;
    }

    vector<int> what = {0, 1, 2, 3, 4, 5};

    for (int k = 0; k < what.size(); k++)
    {
        cout << what[k] << endl;
    }

    what.erase(what.begin(), what.end());

    for (int k = 0; k < what.size(); k++)
    {
        cout << what[k] << endl;
    }

    // value check
    int blank;
    cin >> blank;
}