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
    int ia[] = {0, 2, 4, 6, 8};
    int last = *(ia + 4); // last = 8
    int last2 = *ia;
    int last3 = ia[1] + 4; // = 6?

    cout << last << endl;
    cout << last2 << endl;
    cout << last3 << endl;

    // value check
    int blank;
    cin >> blank;
}