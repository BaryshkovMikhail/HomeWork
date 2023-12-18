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
            if (n > 12 || n < 0) {
                std::cout << "Неправильный номер!" << std::endl;
            }
            else {
                switch (n) {
                case static_cast<int>(months::Jan):
                    std::cout << "Январь" << std::endl;
                    break;
                case static_cast<int>(months::Feb):
                    std::cout << "Февраль" << std::endl;
                    break;
                case static_cast<int>(months::Marth):
                    std::cout << "Март" << std::endl;
                    break;
                case static_cast<int>(months::April):
                    std::cout << "Апрель" << std::endl;
                    break;
                case static_cast<int>(months::May):
                    std::cout << "Май" << std::endl;
                    break;
                case static_cast<int>(months::June):
                    std::cout << "Июнь" << std::endl;
                    break;
                case static_cast<int>(months::Jule):
                    std::cout << "Июль" << std::endl;
                    break;
                case static_cast<int>(months::Aug):
                    std::cout << "Август" << std::endl;
                    break;
                case static_cast<int>(months::Sep):
                    std::cout << "Сентябрь" << std::endl;
                    break;
                case static_cast<int>(months::Oct):
                    std::cout << "Октябрь" << std::endl;
                    break;
                case static_cast<int>(months::Nov):
                    std::cout << "Ноябрь" << std::endl;
                    break;
                case static_cast<int>(months::Dec):
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
