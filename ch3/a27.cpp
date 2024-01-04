#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::string;
using std::vector;

int main()
{
    constexpr size_t sz = 5;       // size_t 안붙이면 작동안됨 int도됨
    int arr[sz] = {1, 2, 3, 4, 5}; // arr의 사이즈는 sz인데 그럼 5임
    int *ip = arr;
    int *ip2 = ip + 4;

    cout << sz << endl;
    cout << arr[2] << endl;
    cout << ip[2] << endl; // 뒤에 [2] 안붙이면 주소뜸
    cout << *ip << endl;
    cout << ip2 << endl;
    cout << *ip2 << endl;

    // value check
    int blank;
    cin >> blank;
}