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
     string shit;
     do
     {
          int val1 = 0, val2 = 0;
          cin >> val1 >> val2;
          cout << "what" << endl;
          cin >> shit;
     } while (shit.empty() && shit[0] != 'n');

     // value check
     int blank;
     cin >> blank;
}