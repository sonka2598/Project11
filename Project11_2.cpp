#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string word = "семечки";
    std::string findWord;
    do {
        std::cout << "Угадайте слово: ";
        std::cin >> findWord;
    }
    while (word != findWord);

    std::cout << "Правильно! Вы победили! Загаданное слово - " + word;

    return 0;
}
