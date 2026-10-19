#include <iostream>
#include <iomanip>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    // Настройка кодировки для корректного отображения русского языка в Windows
    #ifdef _WIN32
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);
    #endif

    std::cout << "=== Задание 3 ===" << std::endl;
    std::cout << "Преобразование секунд в часы:минуты:секунды\n" << std::endl;

    // ==========================================
    // ОСНОВНОЕ ЗАДАНИЕ
    // ==========================================
    int totalSeconds;
    std::cout << "Введите количество секунд: ";
    std::cin >> totalSeconds;

    // Вычисление часов, минут и секунд
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;

    // Вывод результата с форматированием (добавляем ведущие нули)
    std::cout << "Результат: ";
    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setfill('0') << std::setw(2) << minutes << ":"
              << std::setfill('0') << std::setw(2) << seconds << std::endl;

    std::cout << "\n----------------------------------------\n" << std::endl;

    // ==========================================
    // ДОПОЛНИТЕЛЬНОЕ ЗАДАНИЕ
    // ==========================================
    std::cout << "Дополнительное задание:\n";
    std::cout << "Введите время в формате часы:минуты:секунды (например, 01:15:30): ";
    
    int h, m, s;
    char colon1, colon2; // Переменные для считывания символов ':'

    // Считываем данные (числа и разделители)
    std::cin >> h >> colon1 >> m >> colon2 >> s;

    // Проверка, что пользователь ввел именно двоеточия
    if (colon1 != ':' || colon2 != ':') {
        std::cerr << "Ошибка: неверный формат ввода!" << std::endl;
        return 1;
    }

    // Вычисление общего количества секунд
    int resultSeconds = h * 3600 + m * 60 + s;

    std::cout << "Общее количество секунд: " << resultSeconds << std::endl;

    return 0;
}
