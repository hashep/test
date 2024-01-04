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
    int *ptrs[10]; // 크기 10, 이름이 ptrs인 배열

    unsigned scores[11] = {};
    unsigned grade;

    while (cin >> grade)
    {
        if (grade <= 100)
        {
            +scores[grade / 10];
        }
    }

    for (auto i : scores)
    {
        cout << i << " " << endl;
    }

    // value check
    int blank;
    cin >> blank;
}