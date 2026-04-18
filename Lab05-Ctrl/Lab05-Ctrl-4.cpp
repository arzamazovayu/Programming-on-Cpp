#include <iostream>
#include <windows.h>
#include <cstring>
#include <cstdlib>

int main(int argc, char* argv[])
{
    // Отладка/Свойства отладки для проекта Lab5-Ctrl-4/Свойства конфигурации/Отладка/Аргументы команды/-a 15 45
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    if (argc != 4) {
        std::cout << "Ошибка: неверное количество аргументов! Требуется 4 аргумента (включая название программы)\n";
        std::cout << "Пример аргументов: \nLab5-Ctrl-4 -a 15 45\nLab5-Ctrl-4 -m 10 20\n";
        return 0;
    }
    
    const char* flag = argv[1];
    bool valid_flag = (strncmp(flag, "-a", 2) == 0 || strncmp(flag, "-m", 2) == 0);

    if (!valid_flag) {
        std::cout << "Ошибка: неверный флаг операции! Требуется -a (+) или -m (*)\n";
        return 0;
    }

    int x = atoi(argv[2]);
    int y = atoi(argv[3]);

    if (strncmp(flag, "-a", 2) == 0) {
        std::cout << x + y << "\n";
    }
    else {
        std::cout << x * y << "\n";
    }
    return 1;
}