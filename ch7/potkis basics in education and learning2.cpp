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
    void SetInfo(int name2, int age2, int spec2);
    void ShowInfo();
};

void ssap::SetInfo(int name2, int age2, int spec2)
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
    ssap ssap;

    ssap.SetInfo(4, 16, 5);
    ssap.ShowInfo();

    // value check
    int blank;
    cin >> blank;
}

/* https://blog.hexabrain.net/167 */