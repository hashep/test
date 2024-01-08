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
     int n = 0;
     int &r = n; // int r = n = 0;
     int r = 42; // int r = n = 42;

     // value check
     int blank;
     cin >> blank;
}