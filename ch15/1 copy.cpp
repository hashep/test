#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>
#include <map>
#include <set>
#include <memory>

using std::accumulate;
using std::begin;
using std::cin;
using std::copy;
using std::cout;
using std::end;
using std::endl;
using std::ends;
using std::fill;
using std::find;
using std::flush;
using std::ifstream;
using std::list;
using std::map;
using std::pair;
using std::runtime_error;
using std::set;
using std::shared_ptr;
using std::size_t;
using std::string;
using std::vector;

class Quote
{
public:
    std::string isbn() const;
    virtual double net_price(std::size_t n) const;
};

class Quote2 : public Quote // Quote2는 Quote를 상속받는다
{
public:
    double net_price(std::size_t) const override;
};

int main()
{

    // value check
    int blank;
    cin >> blank;
}