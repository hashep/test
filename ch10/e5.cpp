#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using std::accumulate;
using std::begin;
using std::cin;
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
    vector<int> a;
    auto it = back_inserter(a);

    it = 42;

    cout << a[0] << endl;
    cout << a[1] << endl;

    // value check
    int blank;
    cin >> blank;
}