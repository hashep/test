#include <iostream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
     int n = 0, i = 42;
     int *p = &n, *q = &i;
     *p = 50; // *p = n = 50, *q = i = 42
     p = q;   // n = 50, *p = *q = i = 42

     cout << *p << endl;
     cout << *q << endl;
     cout << n << endl;
     cout << i << endl;

     *p = 60; // n = 50, *p = *q = i = 60

     cout << *p << endl;
     cout << *q << endl;
     cout << n << endl;
     cout << i << endl;

     // value check
     int blank;
     cin >> blank;
}