#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>

class Adress
{
private:
    std::string city;
    std::string street;
    unsigned int house = 0;
    unsigned int kvartira = 0;
    std::ostringstream full_adress;
public:

    Adress& operator=(const Adress& other) {
        city = other.city;
        street = other.street;
        house = other.house;
        kvartira = other.kvartira;
        return *this;
    }

    std::string get_output_address() {
        full_adress << city << ", " << street << ", " << house << ", " << kvartira;
        return full_adress.str();
    }

    Adress() {}
    Adress(std::string city, std::string street, unsigned int house, unsigned int kvartira)
        :city(city), street(street), house(house), kvartira(kvartira) {}

};



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::ifstream file("in.txt");
    int rows;
    std::string city;
    std::string street;
    unsigned int house;
    unsigned int kvartira;
   


    if (file.is_open())
    {
        bool fileIsOver;
        fileIsOver = file.eof();
        file >> rows;
        Adress* mas = new Adress[rows];

        while (!fileIsOver)
        {
            for (int i = 0; i < rows; i++)
            {
                file >> city >> street >> house >> kvartira;
                Adress adress(city, street, house, kvartira);
                mas[i] = adress;
                fileIsOver = file.eof();
            }

            fileIsOver = file.eof();
        }
       
        std::ofstream outFile("out.txt");
        if (outFile.is_open()) {
            outFile << rows << std::endl;
        }
        else {
            std::cout << "Не получилось записать файл!" << std::endl;
        }
        for (int i = 0; i < rows; i++)
        {
            outFile << mas[i].get_output_address() << std::endl;

        }
        outFile.close();
        delete[]mas;
    }
    else
    {
        std::cout << "Не получилось открыть файл!" << std::endl;
    }
    file.close();

    return 0;
}

