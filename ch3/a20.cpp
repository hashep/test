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
    vector<int> v;
    const vector<int> cv;

    auto i1 = v.begin();
    auto i2 = cv.begin();
    auto i3 = v.cbegin();
    auto i4 = v.cend();

    vector<int> it;

    /*마우스올려노흥면먼지아렬줌*/

    // value check
    int blank;
    cin >> blank;
}