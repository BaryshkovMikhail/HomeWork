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
    unsigned int house;
    unsigned int kvartira;
public:

    std::string get_output_address() {
        std::ostringstream new_adress;
        new_adress << city << ", " << street << ", " << house << ", " << kvartira;
        return new_adress.str();
    }

    Adress(std::string city, std::string street, unsigned int house, unsigned int kvartira)
        :city(city), street(street), house(house), kvartira(kvartira) {}

};


void sort_adress(std::string* arr, int size)
{
    std::string tmp;
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; ++j){
            if (arr[j + 1] < arr[j])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
}

}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::ifstream file("in.txt");
    int rows;
    std::string arr[5];
    std::string city;
    std::string street;
    unsigned int house;
    unsigned int kvartira;


    if (file.is_open())
    {
        bool fileIsOver;
        fileIsOver = file.eof();
        file >> rows;
        std::ofstream outFile("out.txt");
        if (outFile.is_open()) {
            outFile << rows << std::endl;
        }
        else {
            std::cout << "Не получилось открыть файл!" << std::endl;
        }
        while (!fileIsOver)
        {
            for (int i = 0; i < rows; i++)
            {
                file >> city;
                file >> street;
                file >> house;
                file >> kvartira;
                Adress adress(city, street, house, kvartira);
                arr[i] = adress.get_output_address();
               // outFile << adress.get_output_address() << std::endl;

            }

            fileIsOver = file.eof();
        }
        sort_adress(arr, rows);
        for (int i = 0; i < rows; i++)
        {
            outFile << arr[i] << std::endl;

        }
        outFile.close();
    }
    else
    {
        std::cout << "Не получилось открыть файл!" << std::endl;
    }
    file.close();

    return 0;
}

