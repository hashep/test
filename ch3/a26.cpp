#include <iostream>
#include <string>
#include <typeinfo>
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
    int arr[] = {1, 2, 3, 4};
    int *pbeg = begin(arr), *pend = end(arr);

    cout << arr << "\n"
         << *arr << "\n"
         << pbeg << "\n"
         << *pbeg << "\n"
         << pend << "\n"
         << *pend << "\n"
         << endl;

    while (pbeg != pend && *pbeg >= 0)
    {
        cout << *pbeg << " & " << pbeg << endl;
        ++pbeg;
    }

    // value check
    int blank;
    cin >> blank;
}