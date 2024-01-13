#include <iostream>
#include <string>
#include <vector>

using std::begin;
using std::cin;
using std::cout;
using std::end;
using std::endl;
using std::runtime_error;
using std::size_t;
using std::string;
using std::vector;

int main()
{
    int num = 50;
    int num1 = 72;
    int num2 = 94;

    printf("num의 저장 위치: %#x\n", &num);   // num의 저장 위치: 0x22ff44
    printf("num1의 저장 위치: %#x\n", &num1); // num1의 저장 위치: 0x22ff40
    printf("num2의 저장 위치: %#x\n", &num2); // num2의 저장 위치: 0x22ff3c
    cout << "" << endl;

    int a = 100;

    cout << a << endl;
    cout << &a << endl; // a의주소
    /* cout << *a << endl; 오류*/
    cout << "" << endl;

    int *b = &a; // b = &a b는a의주소다, b는 누군가의 주소를 저장하므로 포인터 변수라 부른다

    cout << b << endl;  // b는a의주소다
    cout << &b << endl; // &b는a의주소의주소다
    cout << *b << endl; // 100
    cout << "" << endl;

    *b = 5000; // a = 5000;

    cout << a << endl;
    cout << "" << endl;

    int **c = &b; // 이중포인터 **c = *b = a

    cout << **c << endl; // a = 5000
    cout << *c << endl;  // b = 0x61fefc
    cout << c << endl;   // c = 0x61fefc의 주소
    cout << "" << endl;

    c++;

    cout << c << endl;
    cout << "" << endl;

    int numa[3];
    int *pNumaArray[3] = {numa, numa + 1, numa + 2};
    int i;

    for (i = 0; i < 3; i++)
        scanf("%d", pNumaArray[i]);

    printf("입력된 숫자는 각각 %d, %d, %d 입니다.\n", numa[0], numa[1], numa[2]);

    // value check
    int blank;
    cin >> blank;
}

// 파일명엔 특수문자가 들어가면 안된다(컴파일 안됨)