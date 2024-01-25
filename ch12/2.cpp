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
    int *pi = new int;

    cout << pi << endl;
    cout << *pi << endl;

    delete pi;

    cout << pi << endl;
    cout << *pi << endl;

    int *say = new int(); // *say = 0

    cout << say << endl;
    cout << *say << endl;

    int *yee = new int(22);             // *yee = 22
    string *yeet = new string(10, '9'); // *yeet = 9999999999

    cout << yee << endl; // 0xfe13b0 주소값
    cout << *yee << endl;
    cout << yeet << endl;
    cout << *yeet << endl;

    delete yee;

    cout << yee << endl;  // 0xfe13b0 주소값
    cout << *yee << endl; // 무작위숫자로 초기화

    string *what = new string(10, 'a');

    cout << what << endl;

    int sa = 2;

    cout << sa << endl;
    cout << &sa << endl;

    // value check
    int blank;
    cin >> blank;
}