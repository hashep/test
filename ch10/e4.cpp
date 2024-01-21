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
    int a[] = {1, 2, 3, 4};

    fill(begin(a), end(a), 0);

    a[6] = 10;

    for (int k = 0; k < 6; k++)
    {
        cout << a[k] << endl;
    }

    // value check
    int blank;
    cin >> blank;
}