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
     int &r = n;

     cout << r << endl;
     cout << n << endl;
     cout << &r << endl;
     cout << &n << endl;

     r = 42;
     r = i;

     // value check
     int blank;
     cin >> blank;
}