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

    cout << shit[0] << endl;
    cout << shit[1] << endl;
    cout << shit[2] << endl;

    shit[1] = 1;
    shit[2] = 2;
    shit[3] = 3;

    for (int k = 0; k < shit.size(); ++k)
    {
        cout << shit[k] << endl;
    }
    cout << "?" << endl;

    cout << shit[2] << endl;
    cout << shit.size() << endl;
    cout << shit[3] << endl;
    cout << shit[4] << endl;
    cout << shit.size() << endl;

    shit.push_back(10);
    for (int k = 0; k < shit.size(); ++k)
    {
        cout << shit[k] << endl;
    }

    shit.push_back(9);
    for (int k = 0; k < shit.size(); ++k)
    {
        cout << shit[k] << endl;
    }
    cout << shit.size() << endl; // 4
    cout << shit[0] << endl;     // 1번째값
    cout << shit[3] << endl;     // 4번째값
    cout << shit[4] << endl;     // 오류
    cout << "llllllllllllllllllllllllll" << endl;
    vector<int> what(2);

    for (int k; k < what.size(); k++)
    {
        cout << what[k] << endl;
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