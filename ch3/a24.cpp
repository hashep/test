#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    string nums[] = {"1", "2", "3"};
    string *p = &nums[0]; // string *p = nums;

    cout << p << "\n"
         << *p << endl;

    // value check
    int blank;
    cin >> blank;
}