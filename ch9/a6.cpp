#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::ends;
using std::flush;
using std::ifstream;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    vector<int> shit(2, 0);

    shit.emplace_back(5);

    for (int k = 0; k < shit.size(); k++)
    {
        cout << shit[k] << endl;
    }

    if (!shit.empty())
    {
        shit.front() = 42;
        auto &k = shit.back();
        k = 1024; // 42 0 1024
        auto k2 = shit.back();
        k2 = 0; // 42 0 1024 그대로임 42 0 0 (x)
    }

    for (int k = 0; k < shit.size(); k++)
    {
        cout << shit[k] << endl; // 42 0 1024
    }

    // value check
    int blank;
    cin >> blank;
}
/*
size() - 벡터의 요소의 개수를 반환한다.

swap(vector객체) - 두 벡터의 내용을 교환(교체)한다.

empty() - 벡터가 비었는지 여부를 반환한다.

at(index) - index번째 요소에 접근한다.

front() - 벡터의 첫 번째 요소를 반환한다.

back() - 벡터의 마지막 요소를 반환한다.

begin() - 벡터의 첫 번째 요소를 가리킨다.

end() - 벡터의 마지막 요소를 가리킨다.
*/