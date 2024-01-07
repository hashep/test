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
     auto vi = {0, 1, 2, 3, 4, 5, 6};

     /* ** A는 int에 대한 포인터이다 == A는 무언가의 주소(int*)이다 */

     int a = 1;
     int b = ++a;

     cout << a << "\n"
          << b << "\n"
          << endl;

     int c = 1;
     int d = c++; // c++ 남한테 자기 원래값 주고 지가 올라감

     cout << c << "\n"
          << d << endl;

     // value check
     int blank;
     cin >> blank;
}