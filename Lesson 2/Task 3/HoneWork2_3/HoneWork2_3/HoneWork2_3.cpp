#include <iostream>
#include<windows.h>

struct person {
    std::string city = "Не известно";
    std::string street = "Не известно";
    unsigned short house = 0;
    unsigned int kvartira = 0;
    unsigned int index = 0;
};

void printPerson(person& pers) {
    std::cout <<"Город: " << pers.city << std::endl;
    std::cout <<"Улица: " << pers.street << std::endl;
    std::cout << "Номер дома: " << pers.house << std::endl;
    std::cout << "Номер квартиры: " << pers.kvartira << std::endl;
    std::cout << "Индекс:" << pers.index << std::endl << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    person person{ "Москва" ,"Арбат", 12, 8, 123456};
    printPerson(person);
    person.city = "Ижевск";
    person.street = "Пушкина";
    person.house = 59;
    person.kvartira = 143;
    person.index = 953769; 
    printPerson(person);

    return 0;
    
}

