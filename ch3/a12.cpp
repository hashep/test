#include <iostream>
#include <string>
#include <typeinfo>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s("what is");

    for (decltype(s.size()) index = 0; index != s.size() /*왼쪽우선순위*/ && !isspace(s[index]); ++index) // index는 0이다; index가s크기랑다르고 & s[index]가 공백문자가아니면; index에 1을 더한다
    {
        s[index] = toupper(s[index]);
        cout << s << " " << typeid(index).name() << endl;
    }

    // value check
    int blank;
    cin >> blank;
}