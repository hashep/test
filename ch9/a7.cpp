#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <list>

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
    vector<string> sax;
    /* cout << sax[0];
     cout << sax.at(0); */

    vector<int> wat = {0, 1, 2, 3, 4, 5};
    auto wut = wat.begin();
    while (wut != wat.end())
    {
        if (*wut % 2) // wut이 홀수이면 (2로 나눠지는 연산이 불가능하면 ?)
        {
            wut = wat.erase(wut);
        }
        else
        {
            ++wut;
        }
    }

    for (int k = 0; k < wat.size(); k++)
    {
        cout << wat[k] << endl;
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