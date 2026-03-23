#include <iostream>
#include <fmt/core.h>
#include <cmath>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Вас приветствует программа расчёта площади многоугольника!\n";

    double a1[2];
    std::cout << "Введите координаты 1-й точки [x y]:\n";
    std::cin >> a1[0] >> a1[1];
    double a2[2];
    std::cout << "Введите координаты 2-й точки [x y]:\n";
    std::cin >> a2[0] >> a2[1];
    double a3[2];
    std::cout << "Введите координаты 3-й точки [x y]:\n";
    std::cin >> a3[0] >> a3[1];
    double a4[2];
    std::cout << "Введите координаты 4-й точки [x y]:\n";
    std::cin >> a4[0] >> a4[1];
    double a5[2];
    std::cout << "Введите координаты 5-й точки [x y]:\n";
    std::cin >> a5[0] >> a5[1];

    double t = std::abs(
        a1[0] * a2[1] +  
        a2[0] * a3[1] +  
        a3[0] * a4[1] +  
        a4[0] * a5[1] +  
        a5[0] * a1[1] -  
        a2[0] * a1[1] -  
        a3[0] * a2[1] -  
        a4[0] * a3[1] -  
        a5[0] * a4[1] -  
        a1[0] * a5[1]    
    );    
    double S = t * 0.5;

    fmt::print("Площадь пятиугольника равна: {}", S);
}
