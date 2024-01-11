#include <iostream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::string;
using std::vector;

double fact(double val)
{
     int ret = 1;
     while (val > 1)
          ret *= val--;
     return ret;
}

int main()
{
     int j = fact(5);
     cout << j << endl;

     // value check
     int blank;
     cin >> blank;
}