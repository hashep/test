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
    int ia[] = {0, 1, 2, 3};
    auto ia2(ia); // auto ia2(&ia[0])

    cout << ia << "\n"
         << *ia2 << "\n"
         << endl;

    int *e = &ia[4];

    cout << e << "\n"
         << *e << "\n"
         << endl;

    for (int *b = ia; b != e; ++b)
    {
        cout << b << endl;
        cout << *b << endl;
    }

    // value check
    int blank;
    cin >> blank;
}