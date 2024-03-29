#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using std::accumulate;
using std::begin;
using std::cin;
using std::copy;
using std::cout;
using std::end;
using std::endl;
using std::ends;
using std::fill;
using std::find;
using std::flush;
using std::ifstream;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    auto f = []
    { return 42; };

    cout << f << endl;   // 1
    cout << *f << endl;  // 1
    cout << &f << endl;  // 주소
    cout << f() << endl; // 42

    // value check
    int blank;
    cin >> blank;
}