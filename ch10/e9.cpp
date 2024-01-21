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
    auto f2 = [&v1]
    { return v1; };

    cout << f2() << endl; // 42

    v1 = 0;
    auto j = f2(); // 위에서 f2가 [v1]이 아니라 [&v1]을 불러왔기때문에 42 안불러와짐

    cout << j << endl; // 0

    // value check
    int blank;
    cin >> blank;
}