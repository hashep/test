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

int main()
{
    int *a = new int[10];                      // 빈 int가 10개
    int *b = new int[10]();                    // 값이 0으로 초기화된 int가 10개
    string *c = new string[10]();              // 빈 string 10개
    string *d = new string[10]();              // 빈 string 10개
    int *e = new int[10]{0, 1, 2, 3, 4};       // int는 0,1,2,3,4,0,0,0,0,0..
    string *f = new string[10]{"what", "wut"}; // string은..

    // value check
    int blank;
    cin >> blank;
}