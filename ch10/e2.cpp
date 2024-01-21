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
using std::find;
using std::flush;
using std::ifstream;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    int vec[] = {1, 2, 3, 4};

    int sum = accumulate(begin(vec), end(vec), 0); // sum = (1~4) + 0 = 10

    cout << sum << endl;

    // value check
    int blank;
    cin >> blank;
}