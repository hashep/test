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
    size_t v1 = 42; // size_t = int인데 크기가큼
    auto f = [v1]
    { return v1; }; // f() = v1 = 42

    cout << f() << endl;

    v1 = 0;
    auto j = f();

    cout << f() << endl; // 42
    cout << j << endl;   // 42
    cout << v1 << endl;  // 0

    // value check
    int blank;
    cin >> blank;
}