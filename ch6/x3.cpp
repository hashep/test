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
     int i = 0, j[2] = {0, 1};

     cout << i << endl;  // 0
     cout << &i << endl; // 주소

     cout << j << endl;    // 주소
     cout << &j << endl;   // 주소(동일)
     cout << *j << endl;   // 0 = j[0]
     cout << j[1] << endl; // 1 = j[1]

     // value check
     int blank;
     cin >> blank;
}