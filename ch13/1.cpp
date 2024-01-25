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

class Foo
{
public:
    Foo();            // 기본 생성자
    Foo(const Foo &); // 복사 생성자
    ~Foo();           // 소멸자, 매개변수 없어서 언제하나 클래스별로 하나
};

/* Foo::Foo(const Foo &orig); */