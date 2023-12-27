#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total;
    if (std::cin >> total)
    {
        Sales_item trans;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                std::cout << total << std::endl;
                total = trans;
            }
        }
    }
    else
    {
        std::cerr << "no data?" << std::endl;
        std::cout << "실페" << std::endl;
    }

    // check
    int check = 0;
    std::cin >> check;
    std::cout << std::endl;
}