#include <iostream>
#include <string>
#include <typeinfo>
#include <windows.h>

int main() {
        SetConsoleOutputCP(CP_UTF8);
        SetConsoleCP(CP_UTF8);
    int integer;
    double decimal;
    std::string text;

    std::cout << "Введите целое число: ";
    std::cin >> integer;

    std::cout << "Введите дробное число: ";
    std::cin >> decimal;

    std::cin.ignore(); // Очистка буфера

    std::cout << "Введите строку: ";
    std::getline(std::cin, text);

    std::cout << "Значение: " << integer 
              << ", тип: " << typeid(integer).name() << "\n";
              
    std::cout << "Значение: " << decimal 
              << ", тип: " << typeid(decimal).name() << "\n";
              
    std::cout << "Значение: " << text 
              << ", тип: " << typeid(text).name() << "\n";

    return 0;
}



