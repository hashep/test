#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include <map>

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
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    map<string, size_t> word_count; // string을 size_t에 사상하고, map은 비어있다

    string word;

    while (cin >> word)
        ++word_count[word];

    for (const auto &w : word_count)
        cout << w.first << w.second << ((w.second > 1) ? "times" : "times") << endl;

    // value check
    int blank;
    cin >> blank;
}