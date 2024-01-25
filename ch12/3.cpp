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
    int *p(new int(42));
    auto q = p;

    cout << *p << endl;
    cout << p << endl;
    cout << *q << endl;
    cout << q << endl;

    delete p;

    cout << *p << endl;
    cout << p << endl;
    cout << *q << endl;
    cout << q << endl;

    p = nullptr; // p는 더이상 객체를 가르키지 않는다, q는 영향X

    /* cout << *p << endl;  에러 */
    cout << p << endl;
    cout << *q << endl;
    cout << q << endl;

    // value check
    int blank;
    cin >> blank;
}