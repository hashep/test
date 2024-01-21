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

    size_t v1 = 42;
    cout << v1 << endl; // 42

    auto f2 = [&v1]
    { return ++v1; };

    cout << f2() << endl; // 43
    cout << v1 << endl;   // 43

    v1 = 0;
    auto j = f2();

    cout << v1 << endl;   // 1
    cout << f2() << endl; // 2
    cout << j << endl;    // 1 ( 0 + 1 )

    v1 = v1 + 1;

    cout << j << endl; // 1 변화없음

    cout << "" << endl;

    auto f3 = [v1]
    { return v1; };
    auto k = f3();

    cout << f3() << endl; // 3
    cout << k << endl;    // 3

    // value check
    int blank;
    cin >> blank;
}