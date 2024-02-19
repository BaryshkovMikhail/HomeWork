#include <iostream>
#include <string>
#include <Windows.h>
#include "dinam_lib_Race.h"

int main()
{

    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int start = 0;
    std:: cout << "Добро пожаловать в симулятор гонок ;\")\n";

    while (start != 2) {
        int type_race = 0, distance = 0, a = 0, b = 0, registration_cars = 1, sum = 0;
        double c = 0;
        std::string mas_type_race[4] = { "Empty0", "Гонка для наземного транспорта.","Гонка для воздушного транспорта.","Гонка для наземного и воздушного транспорта." };
        std::string mas_name_cars[8] = { "Empty0", "верблюд","верблюд-быстроход","кентавр","ботинки - вездеходы","орёл","метла","ковёр-самолёт"};
        std::string mas_chose_car[8] = { "x", "x", "x", "x", "x", "x", "x", "x"};
        int mass[8] = {};
        double mas_time[8] = {};

        do {
            std::cout << "1. " << mas_type_race[1] << std::endl;
            std::cout << "2. " << mas_type_race[2] << std::endl;
            std::cout << "3. " << mas_type_race[3] << std::endl;
            std::cout << "Вибириате тип гонки: ";
            std::cin >> type_race;
            std::cout << std::endl;
        } while (type_race == 0 || type_race >3);
        do {
            std::cout << "Укажите длинну дистанции (должна быть положительна): ";
            std::cin >> distance;
            std::cout << std::endl;
        } while (distance <= 0);

        do {
            do {
                std::cout << "\n 1. Зарегистрировать транспорт." << "\n 2. Начать гонку.\n Выберите действие ";
                std::cin >> a;
                if (registration_cars < 2 && a == 2) {
                    std::cout << "\nДолжно быть зарегистрировано хотябы 2 транспортных средства.";
                    a = 5;
                }
            } while (a < 1 || a > 2);

            if (a == 1)
            {
                do {
                    std::cout << "\n" << mas_type_race[type_race] << " Расстояние: " << distance << " ";
                    if (registration_cars == 1) { std::cout << "\n зарегистрированных транспортов нет"; }

                    else {
                        std::cout << "\n зарегистрированны: ";
                        for (int i = 1; i < registration_cars; ++i) {
                            std::cout << mas_chose_car[i] << ", ";
                        }
                    }
                    std::cout << "\n 1. " << mas_name_cars[1] <<
                        "\n 2. " << mas_name_cars[2] <<
                        "\n 3. " << mas_name_cars[3] <<
                        "\n 4. " << mas_name_cars[4] <<
                        "\n 5. " << mas_name_cars[5] <<
                        "\n 6. " << mas_name_cars[6] <<
                        "\n 7. " << mas_name_cars[7] <<
                        "\n 0. закончить регистрацию" <<
                        "\n Выберите транспорт или 0 для окончания регистрации ";
                    std::cin >> b;
                    if (b == 0) { break; }
                    else if (b > 7 || b < 0) { continue; }

                    else if (type_race == 1) {
                        if (b > 0 && b < 5) {
                            for (int i = 0; i < 8; ++i) {
                                if (mas_chose_car[i] == mas_name_cars[b]) {
                                    std::cout << "\nДанный транспорт уже зарегистрирован";
                                    i = 15;
                                    b = 15;
                                    break;
                                }
                            }
                            if (b != 15) {
                                mass[registration_cars] = b;
                                mas_chose_car[registration_cars] = mas_name_cars[b];
                                ++registration_cars;
                            }
                        }
                        else {
                            std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
                            continue;
                        }
                    }
                    else if (type_race == 2) {
                        if (b > 4 && b < 8) {
                            for (int i = 0; i < 8; ++i) {
                                if (mas_chose_car[i] == mas_name_cars[b]) {
                                    std::cout << "\nДанный транспорт уже зарегистрирован";
                                    i = 15;
                                    b = 15;
                                    break;
                                }
                            }
                            if (b != 15) {
                                mass[registration_cars] = (b);
                                mas_chose_car[registration_cars] = mas_name_cars[b];
                                ++registration_cars;
                            }
                        }
                        else {
                            std::cout << "\nДанный тип транспорта не подходит для данной трассы!";
                            continue;
                        }
                    }
                    else {
                        for (int i = 1; i < 8; ++i) {
                            if (mas_chose_car[i] == mas_name_cars[b]) {
                                std::cout << "\nДанный транспорт уже зарегистрирован";
                                i = 15;
                                b = 15;
                                continue;
                            }
                        }
                        if (b != 15) {
                            mass[registration_cars] = (b);
                            mas_chose_car[registration_cars] = mas_name_cars[b];
                            ++registration_cars;
                        }
                    }
                } while (b != 0);
            }
        } while (a == 1);


        for (int i = 1; i < 8; ++i) {
            if (mass[i] == 1) {
                dinam_lib_Race::camel z1;
                mas_time[i] = z1.time_camel(distance);
                ++sum;
            }

            else if (mass[i] == 2) {
                dinam_lib_Race::fastcamel z2;
                mas_time[i] = z2.time_fastcamel(distance);
                ++sum;
            }

            else if (mass[i] == 3) {
                dinam_lib_Race::centaur z3;
                mas_time[i] = z3.time_centaur(distance);
                ++sum;
            }

            else if (mass[i] == 4) {
                dinam_lib_Race::all_terrain_boots z4;
                mas_time[i] = z4.time_all_terrain_boots(distance);
                ++sum;
            }

            else if (mass[i] == 5) {
                dinam_lib_Race::eagle z5;
                mas_time[i] = z5.time_eagle(distance);
                ++sum;
            }

            else if (mass[i] == 6) {
                dinam_lib_Race::metla z6;
                mas_time[i] = z6.time_metla(distance);
                ++sum;
            }

            else if (mass[i] == 7) {
                dinam_lib_Race::Magic_carpet z7;
                mas_time[i] = z7.time_Magic_carpet(distance);
                ++sum;
            }
        }

        for (int i = 1; i < sum; ++i) { //Сортировка пузырьком
            for (int j = 1; j < sum; ++j) {
                if (mas_time[j] > mas_time[j + 1]) {
                    double tmp = mas_time[j];
                    mas_time[j] = mas_time[j + 1];
                    mas_time[j + 1] = tmp;
                    std::string tmp2 = mas_chose_car[j];
                    mas_chose_car[j] = mas_chose_car[j + 1];
                    mas_chose_car[j + 1] = tmp2;
                }
            }
        }

        std::cout << "\nРезультат гонки: ";
        for (int i = 1; i < sum+1; ++i) {
            std::cout << "\n" << i << ". " << mas_chose_car[i] << ". Время: " << mas_time[i];

        }

        std::cout << "\n\n1. Провести ещё одну гонку\n2. Выйти\nВыберите действие:";
        std::cin >> start;
    }
    system("pause");
    return 0;
}

