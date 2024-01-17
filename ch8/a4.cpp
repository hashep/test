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
    ifstream in("a4test.txt");
    string s;

    if (in.is_open())
    {
        in >> s;
        cout << s << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    // value check
    int blank;
    cin >> blank;
}