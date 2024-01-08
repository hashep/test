#include <iostream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
     int hwat = 1; // int 매개변수(hwat) = 인자(1);

     int n = 0;
     int *p = &n;

     int i = 62;
     int *q = &i;

     *p = 42; // n = 42;
     p = q;   // *p = &i;

     // value check
     int blank;
     cin >> blank;
}