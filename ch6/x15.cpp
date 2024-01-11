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

void reset(int &i)
{
     i = 0;
}

int main()
{
     int j = 42;
     reset(j);

     cout << j << endl;

     // value check
     int blank;
     cin >> blank;
}