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
    auto old_state = cin.rdstate();
    cin.clear();
    process_input(cin);
    cin.setstate(old_state);

    cin.clear(cin.rdstate() & ~cin.failbit & ~cin.badbit);

    // value check
    int blank;
    cin >> blank;
}