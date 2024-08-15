

#include <iostream>
enum class Months
{

    январь = 1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь
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
        case Months::январь:
            std::cout << "январь" << std::endl;
            break;
        case Months::февраль:
            std::cout << "февраль" << std::endl;
            break;
        case Months::март:
            std::cout << "март" << std::endl;
            break;
        case Months::апрель:
            std::cout << "апрель" << std::endl;
            break;
        case Months::май:
            std::cout << "май" << std::endl;
            break;
        case Months::июнь:
            std::cout << "июнь" << std::endl;
            break;
        case Months::июль:
            std::cout << "июль" << std::endl;
            break;
        case Months::август:
            std::cout << "август" << std::endl;
            break;
        case Months::сентябрь:
            std::cout << "сентябрь" << std::endl;
            break;
        case Months::октябрь:
            std::cout << "октябрь" << std::endl;
            break;
        case Months::ноябрь:
            std::cout << "ноябрь" << std::endl;
            break;
        case Months::декабрь:
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
