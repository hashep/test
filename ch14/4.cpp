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

class Sample1
{
    int a;

public:
    Sample1(int n = 0) : a(n) {}
    Sample1 &operator++()
    {
        ++a;
        return *this;
    }
    int meThod() const { return a; };
};

int main()
{
    Sample1 h;
    cout << (++h).meThod() << endl; // 1 출력

    // value check
    int blank;
    cin >> blank;
}