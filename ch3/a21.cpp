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
    vector<int> vi{10, 1, 4, 5, 6}; // 기본형태
    auto beg = vi.begin(), end = vi.end();
    auto mid = vi.begin() + (end - beg) / 2;

    // value check
    int blank;
    cin >> blank;
}