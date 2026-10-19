#include <iostream>
#include <string>
#include <algorithm> // Для transform и count
#include <cctype>    // Для toupper и tolower
#include <windows.h> // Для русского языка

int main() {
    // Включаем поддержку русского языка в консоли
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::string text;
    std::cout << "Введите строку: ";
    
    // Используем getline, чтобы можно было вводить текст с пробелами
    std::getline(std::cin, text);

    std::cout << "Длина: " << text.length() << "\n";

    // Перевод в ВЕРХНИЙ регистр
    std::string upper = text;
    std::transform(upper.begin(), upper.end(), upper.begin(),
                   [](unsigned char c) { return std::toupper(c); });
    std::cout << "Верхний регистр: " << upper << "\n";

    // Перевод в нижний регистр
    std::string lower = text;
    std::transform(lower.begin(), lower.end(), lower.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    std::cout << "Нижний регистр: " << lower << "\n";

    // Вывод первого и последнего символа
    // Проверяем, что строка не пустая (чтобы программа не вылетела с ошибкой)
    if (!text.empty()) {
        std::cout << "Первый символ: " << text.front() << "\n";
        std::cout << "Последний символ: " << text.back() << "\n";
    } else {
        std::cout << "Строка пуста.\n";
    }

    // Подсчет пробелов
    int spaces = std::count(text.begin(), text.end(), ' ');
    std::cout << "Количество пробелов: " << spaces << "\n";

    return 0;
}
