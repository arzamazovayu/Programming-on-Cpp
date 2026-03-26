#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Приветствую! Введите координаты точек [x y]:\n";
    double x;
    double y;

    std::cin >> x;
    std::cin >> y;

    if (x * x + y * y < 9 && y > 0) { //&& - И
        std::cout << "Точка находится внутри фигуры.\n";
    }
    else if (x * x + y * y > 9 || y < 0) { //|| - ИЛИ
        std::cout << "Точка находится снаружи фигуры.\n";
    }
    else { // # - его тут нет, но НЕ
        std::cout << "Точка находится на границе фигуры.\n";
    }
}
