#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

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
    int ia[] = {1, 2, 3, 5};
    int val = 5;

    auto result1 = find(begin(ia), end(ia), val);
    auto result2 = find(ia, ia + 3, val);

    // value check
    int blank;
    cin >> blank;
}