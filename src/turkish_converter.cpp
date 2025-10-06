#include "../include/main.h"

std::string convert_Turkish(int number)
{
    if ((0 <= number) && (number <= 99))
    {

        std::string units[10] = {"sıfır", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz"};
        std::string dozens[9] = {"on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan"};

        std::string lit_number;

        if ((0 <= number) && (number <= 9))
            lit_number = units[number];
        else if (number % 10 == 0)
            lit_number = dozens[number / 10 - 1];
        else
            lit_number = dozens[number / 10 - 1] + " " + units[number % 10];
        return lit_number;
    }
    else
        return "Указано недопустимое значение";
}