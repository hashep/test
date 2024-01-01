#include <iostream>
#include "sales_data.h"

int main()
{
    Sales_data data1, data2;

    double price = 0;
    std::cin >> data1.bookNo >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;

    std::cin >> data2.bookNo >> data2.units_sold >> price;
    data2.revenue = data2.units_sold * price;

    if (data1.bookNo == data2.bookNo)
    {
        unsigned totalcnt = data1.units_sold + data2.units_sold;
        double totalrevenue = data1.revenue + data2.revenue;

        std::cout << data1.bookNo << " " << totalcnt << " " << totalrevenue;
    }

    // value check
    int v10 = 0;
    std::cin >> v10;
    std::cout << std::endl;
    return -1;
}