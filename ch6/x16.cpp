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

bool isShorter(const string &s1, const string &s2)
{
     return s1.size() < s2.size();
}

int main()
{
     int k = isShorter("shit", "shitty");
     cout << k << endl; // 1 참

     int p = isShorter("shitfsafa", "shitty");
     cout << p << endl; // 0 거짓

     // value check
     int blank;
     cin >> blank;
}