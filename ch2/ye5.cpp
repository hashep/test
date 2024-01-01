#include <iostream>
#include "sales_data.h"

struct Sales_data
{
    std::string bookNo = "shit";
    unsigned units_sold = 0;
    double revenue = 0.0;
} yoyoyo, *yoyoyo2;

int main()
{
    Sales_data data1, data2;

    std::string bookNo;
    std::cout << bookNo.length() << std::endl;
    std::cout << bookNo.size() << std::endl;
    std::cout << bookNo.capacity() << std::endl;

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
}