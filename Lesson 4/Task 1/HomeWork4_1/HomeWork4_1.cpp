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
            new_adress << city << "," << street << "," << house << "," << kvartira;
            return new_adress.str();
        }
        
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
        std::string* arr = new std::string[rows];
        std::ofstream outFile("out.txt");
        if (outFile.is_open()) {
            outFile << rows << std::endl;
        }
        else{
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
            }
            
            fileIsOver = file.eof();
        }
        for (int i = 0; i < rows; i++)
        {
            outFile << arr[i] << std::endl;
        }
        outFile.close();
        delete[]arr;
    }
    else
    {
        std::cout << "Не получилось открыть файл!" << std::endl;
    }
    file.close();
    
    
    return 0;
}

