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

    void set_adress(std::string city, std::string street, unsigned int house, unsigned int kvartira) {
        this->city = city;
        this->street = street;
        this->house = house;
        this->kvartira = kvartira;
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
    Adress adress("Не известен", "Не известена", 0, 0);


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

                mas[i].set_adress(city, street, house, kvartira);
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

