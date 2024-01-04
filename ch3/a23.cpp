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
    unsigned cnt = 42;          // 숫자정할때 쓴다 양수only
    constexpr unsigned sz = 42; // cosntexpr 뒤엔 반드시 = 숫자;

    int arr[10];
    int *parr[sz];
    string bad[cnt];

    int ial[sz] = {0, 1, 2};         // ial의 차원개수 3개
    int a2[] = {0, 1, 2};            // a2의 차원개수 3개
    int a3[5] = {0, 1, 2};           // a3[] = 0 1 2 0 0 (차원개수 5개)
    string a4[3] = {"what", "shit"}; // int = "shit " 안됨, string a4{what, shit, " "}
    /*int a5[2] = {0,1,2} 오류 왼쪽꺼 최소 a5[3]*/

    // int a4 = a2 이런식으로 배열대입 X

    cout << cnt << endl;
    cout << arr << endl;
    cout << *parr << endl;
    cout << ial << endl;
    cout << sz << endl;
    cout << a2 << endl;
    cout << a3 << endl;

    // value check
    int blank;
    cin >> blank;
}