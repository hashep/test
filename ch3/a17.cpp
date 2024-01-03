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
    vector<int> v{1, 2};
    auto b = v.begin(), e = v.end();

    string s("shit string");

    if (s.begin() != s.end()) // if s(hit) != strin(g) , s가 빈 문자열이면 시작과끝이 같다고 취급됨
    {
        auto it = s.begin(); // 마우스올리면확인가능 string it
        *it = toupper(*it);  // shit의 s를 대문자로

        cout << s << endl;
    }

    // value check
    int blank;
    cin >> blank;
}