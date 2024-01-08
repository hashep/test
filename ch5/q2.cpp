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
     vector<int> v = {0, 1, 2, 3};

     for (auto &r : v) // r은 v의 모든 요소를 0 -> 1 -> ... 순서대로 직접 된다
     {
          r *= 2; // r 2베
          cout << r << endl;
          cout << &r << endl;
          cout << v[0] << endl; // 항상 0
     }

     // value check
     int blank;
     cin >> blank;
}