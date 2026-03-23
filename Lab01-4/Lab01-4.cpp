#include <iostream>
#include <fmt/core.h>
#include <cmath>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Вас приветствует программа расчёта площади равностороннего треугольника!\n";
    double a;
    
    std::cout << "Введите длину стороны:\n";
    std::cin >> a;
   
    double p = (a * 3) / 2;
    double b = p - a;
    double S = sqrt(p * b * b * b);

    fmt::print("|{:<10}|{:<10}|\n", "Сторона", "Площадь");
    fmt::print("|{:<10}|{:<10.2f}|\n", a, S);

}
