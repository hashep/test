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
     int j[] = {0, 1};

     // 전부 주소값
     cout << j << endl;        // 0주소
     cout << end(j) << endl;   // 1주소
     cout << begin(j) << endl; // 0주소

     // value check
     int blank;
     cin >> blank;
}