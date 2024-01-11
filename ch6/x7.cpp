#include <iostream>
#include <string>
#include <vector>

using namespace std;

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::string;
using std::vector;

int main()
{
     void print(const char *cp);
     try
     {
          throw runtime_error("niemi");
     }
     catch (runtime_error err)
     {
          cout << "궳뚫쏋뤯" << endl;
     }
     // value check
     int blank;
     cin >> blank;
}