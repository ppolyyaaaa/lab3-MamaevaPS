#include <iostream>
#include <iomanip>   // Для setprecision (форматирование)
#include <algorithm> // Для std::min и std::max
#include <windows.h> // Для русского языка в консоли

int main() {
    // Включаем поддержку русского языка
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    // Вычисляем среднее арифметическое (делим на 3.0, чтобы результат был дробным)
    double average = (a + b + c) / 3.0;
    
    // Находим минимум и максимум из трех чисел
    double minimum = std::min({a, b, c});
    double maximum = std::max({a, b, c});

    // Устанавливаем вывод с 2 знаками после запятой (как .2f в примере)
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Среднее арифметическое: " << average << "\n";
    std::cout << "Минимум: " << minimum << "\n";
    std::cout << "Максимум: " << maximum << "\n";

    return 0;
}