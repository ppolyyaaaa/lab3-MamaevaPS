#include <iostream>
#include <windows.h>
#include <cmath>     // Для pow и fmod
#include <iomanip>   // Для setprecision (форматирование вывода)

int main() {
    // Включаем поддержку русского языка в консоли
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // --- КОД ЗАДАНИЯ 2 ---
    std::cout << "--- Задание 2: Арифметические операции ---\n";
    double a, b;
    
    std::cout << "Введите первое число: ";
    std::cin >> a;
    
    std::cout << "Введите второе число: ";
    std::cin >> b;

    // Включаем вывод с двумя знаками после запятой
    std::cout << std::fixed << std::setprecision(2);
    
    std::cout << "Сумма: " << a + b << "\n";
    std::cout << "Разность: " << a - b << "\n";
    std::cout << "Произведение: " << a * b << "\n";
    
    if (b != 0.0) {
        std::cout << "Деление: " << a / b << "\n";
        std::cout << "Целочисленное деление: " << static_cast<int>(a) / static_cast<int>(b) << "\n";
        std::cout << "Остаток: " << std::fmod(a, b) << "\n";
    } else {
        std::cout << "Ошибка: Деление на ноль!\n";
    }
    
    std::cout << "Степень: " << std::pow(a, b) << "\n";

    return 0;
}
