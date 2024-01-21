#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

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
using std::list;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    list<int> a = {1, 2, 3, 4};
    list<int> b, c;
    copy(a.cbegin(), a.cend(), front_inserter(b));
    copy(a.cbegin(), a.cend(), inserter(c, c.begin()));

    // value check
    int blank;
    cin >> blank;
}