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
     auto cp = 0;

     void print(const char *cp) // void cp 가능, void cp = 0 등등 안됨
     {
          if (cp)
          {
               while (*cp)
               {
                    cout << *cp++;
               }
          }
     }

     // value check ERROR
     int blank;
     cin >> blank;
}