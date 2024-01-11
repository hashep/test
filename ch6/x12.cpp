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

size_t count_calls()
{
     static size_t ctr = 0; // static 안붙이면 main의 for에서 호출당할때마다 0으로 초기화되기때문에 붙여야함
     return ++ctr;
}

int main()
{
     for (size_t i = 0; i != 10; ++i)
          cout << "count : " << count_calls() << endl;

     // value check
     int blank;
     cin >> blank;
}