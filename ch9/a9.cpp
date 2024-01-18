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
    const char *cp = "HEllo world!!!";
    char noNull[] = {'H', 'i'};

    string s1(cp);
    string s2(noNull, 2);

    cout << s1 << endl;
    cout << s2 << endl;

    // value check
    int blank;
    cin >> blank;
}