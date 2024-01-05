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
     int a = 50;

     string finalgrade = (a < 60) ? "fail" : "pass";

     cout << finalgrade << endl;
     cout << (a < 60) ? "fail" : "pass"; // endl 안됨 (?)
     cout << "\n"
          << ((a < 60) ? "fail" : "pass") << endl;

     // value check
     int blank;
     cin >> blank;
}