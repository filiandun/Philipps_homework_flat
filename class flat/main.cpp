#include <iostream>
#include "flat.h"

int main()
{
    setlocale(LC_ALL, "rus");

    Flat first_flat(36, 1700);
    Flat second_flat(296, 7500);

    std::cout << first_flat;
    std::cout << second_flat << std::endl;

// ОПЕРАТОР==
    if (first_flat == second_flat)
    {
        std::cout << "Площади квартир равны" << std::endl;
    } 
    else
    {
        std::cout << "Площади квартир не равны" << std::endl;
    }

    if (first_flat == first_flat)
    {
        std::cout << "Площади квартир равны" << std::endl << std::endl;
    }
    else
    {
        std::cout << "Площади квартир не равны" << std::endl << std::endl;
    }


// ОПЕРАТОР=
    Flat copy_second_flat;
    copy_second_flat = second_flat;


// ОПЕРАТОР>
    if (copy_second_flat > first_flat)
    {
        std::cout << "Цена больше" << std::endl;
    }
    else
    {
        std::cout << "Цена меньше" << std::endl;
    }

    if (copy_second_flat > copy_second_flat)
    {
        std::cout << "Цена больше" << std::endl;
    }
    else
    {
        std::cout << "Цена меньше" << std::endl;
    }
}