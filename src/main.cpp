#include <iostream>
#include <string>
#include <cstdlib>
#include "../include/main.h"

bool Is_number(std::string str)
{
    for (char c : str)
    {
        if (!isdigit(c))
            return false;
    }
    return true;
}

int main()
{
    std::cout << "Введите целое число от 0 до 99" << std::endl;
    std::string str;
    std::cin >> str;

    if (Is_number(str))
    {
        int number = std::atoi(str.c_str());
        std::cout << convert_Turkish(number) << std::endl;
    }
    else
        std::cout << "Указано недопустимое значение" << std::endl;
    return 0;
}