#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include <map>
#include <set>
#include <memory>

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
using std::map;
using std::pair;
using std::runtime_error;
using std::set;
using std::shared_ptr;
using std::size_t;
using std::string;
using std::vector;

template <typename T>
T foo(T *p)
{
    T tmp = *p;
    return tmp;
}

int compare(const int &a, const int &b)
{
    if (a < b)
        return -1;
    if (b < a)
        return 1;
}

int main()
{
    cout << compare(1, 0) << endl;
    cout << compare(0, 1) << endl;

    // value check
    int blank;
    cin >> blank;
}