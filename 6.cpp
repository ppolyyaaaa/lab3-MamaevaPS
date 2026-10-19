#include <iostream>
#include <iomanip> // Для setprecision
#include <windows.h> // Для русского языка в консоли

int main() {
    // Включаем поддержку русского языка
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Конвертер температур\n";
    std::cout << "1. Из °C в °F\n";
    std::cout << "2. Из °F в °C\n";

    int choice;
    std::cout << "Ваш выбор (1/2): ";
    std::cin >> choice;

    // Устанавливаем вывод с 1 знаком после запятой, как на скриншоте (.1f)
    std::cout << std::fixed << std::setprecision(1);

    if (choice == 1) {
        double celsius;
        std::cout << "Введите температуру в °C: ";
        std::cin >> celsius;
        
        double fahrenheit = celsius * 9.0 / 5.0 + 32.0;
        std::cout << celsius << "°C = " << fahrenheit << "°F\n";
        
    } else if (choice == 2) {
        double fahrenheit;
        std::cout << "Введите температуру в °F: ";
        std::cin >> fahrenheit;
        
        double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        std::cout << fahrenheit << "°F = " << celsius << "°C\n";
        
    } else {
        std::cout << "Некорректный выбор\n";
    }

    return 0;
}
