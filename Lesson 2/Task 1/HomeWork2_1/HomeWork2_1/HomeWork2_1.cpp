#include <iostream>

enum class months : short {
    Jan = 1,
    Feb,
    Marth,
    April,
    May,
    June,
    Jule,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
};

int main()
{
    setlocale(LC_ALL, "Russian");
        short n;
        do {
            std::cout << "введите номер месяца: ";
            std::cin >> n;
            months m = static_cast<months>(n);
            if (n > 12 || n < 0) {
                std::cout << "Неправильный номер!" << std::endl;
            }
            else {
                switch (m) {
                case months::Jan:
                    std::cout << "Январь" << std::endl;
                    break;
                case months::Feb:
                    std::cout << "Февраль" << std::endl;
                    break;
                case months::Marth:
                    std::cout << "Март" << std::endl;
                    break;
                case months::April:
                    std::cout << "Апрель" << std::endl;
                    break;
                case months::May:
                    std::cout << "Май" << std::endl;
                    break;
                case months::June:
                    std::cout << "Июнь" << std::endl;
                    break;
                case months::Jule:
                    std::cout << "Июль" << std::endl;
                    break;
                case months::Aug:
                    std::cout << "Август" << std::endl;
                    break;
                case months::Sep:
                    std::cout << "Сентябрь" << std::endl;
                    break;
                case months::Oct:
                    std::cout << "Октябрь" << std::endl;
                    break;
                case months::Nov:
                    std::cout << "Ноябрь" << std::endl;
                    break;
                case months::Dec:
                    std::cout << "Декабрь" << std::endl;
                    break;
                }
                }
            } while (n != 0);       
    if (n == 0) {
        std::cout << "До свидания!";
       
    }
    return 0;
}
