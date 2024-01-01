#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string s1 = "?";
    string s2 = s1;
    string s3 = "shit";
    string s4(10, 'c');
    string s5(s1);
    string s6("shit2");

    cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << endl;

    // value check
    int blank = 0;
    std::cin >> blank;
}