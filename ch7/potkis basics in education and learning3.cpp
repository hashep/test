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

class ssap
{
private:
    int name;
    int age;
    int spec;

public:
    ssap(int name2, int age2, int spec2);
    void ShowInfo();
};

ssap::ssap(int name2, int age2, int spec2)
{
    name = name2;
    age = age2;
    spec = spec2;
}

void ssap::ShowInfo()
{
    cout << "name: " << name << ", age: " << age << ", fuck: " << spec << endl;
}

int main()
{
    ssap ssap(4, 16, 5);
    ssap.ShowInfo();

    // value check
    int blank;
    cin >> blank;
}

// char == 글자만 숫자x

/* https://blog.hexabrain.net/168 */