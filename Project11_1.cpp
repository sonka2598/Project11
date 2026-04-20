#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string name;
    std::string firstName;

    std::cout << "Введите имя: ";
    std::cin >> name;
    std::cout << "Введите фамилию: ";
    std::cin >> firstName;
    std::cout << "Здравствуйте, " + name + " " + firstName + "!";
    return 0;
}
