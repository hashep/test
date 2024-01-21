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
    int a1[] = {0, 1, 2, 3, 4, 5};

    int a2[sizeof(a1) / sizeof(*a1)]; // a2크기=a1크기

    auto ret = copy(begin(a1), end(a1), a2);

    for (int k = 0; k < 6; k++)
    {
        cout << a2[k] << endl;
    }

    // value check
    int blank;
    cin >> blank;
}