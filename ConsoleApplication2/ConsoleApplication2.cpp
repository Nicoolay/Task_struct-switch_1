

#include <iostream>
enum class Months
{

    jan = 1,
    feb,
    mar,
    apr,
    maj,
    jun,
    jul,
    aug,
    sept,
    oct,
    nov,
    dec
};
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "RUS");
    Months months{};
    int monthNumber;
    do {
        std::cout << "Введите номер месяца: " << std::endl;

        std::cin >> monthNumber;
        months = static_cast<Months>(monthNumber);
        switch (months)
        {
        case Months::jan:
            std::cout << "январь" << std::endl;
            break;
        case Months::feb:
            std::cout << "февраль" << std::endl;
            break;
        case Months::mar:
            std::cout << "март" << std::endl;
            break;
        case Months::apr:
            std::cout << "апрель" << std::endl;
            break;
        case Months::maj:
            std::cout << "май" << std::endl;
            break;
        case Months::jun:
            std::cout << "июнь" << std::endl;
            break;
        case Months::jul:
            std::cout << "июль" << std::endl;
            break;
        case Months::aug:
            std::cout << "август" << std::endl;
            break;
        case Months::sept:
            std::cout << "сентябрь" << std::endl;
            break;
        case Months::oct:
            std::cout << "октябрь" << std::endl;
            break;
        case Months::nov:
            std::cout << "ноябрь" << std::endl;
            break;
        case Months::dec:
            std::cout << "декабрь" << std::endl;
            break;
        default:
            std::cout << "Неверный номер месяца" << std::endl;
            break;
        }
    } while (monthNumber != 0);
    std::cout << "До свидания!" << std::endl;





    return 0;
}
