#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <fmt/core.h>

typedef std::tuple<bool, double, double> Tuple;

Tuple Myroot(double a, double b, double c, double& x1, double& x2) {

    bool flag = false;
    double D = pow(b, 2) - 4 * a * c;

    if (D < 0) {

    }
    else if (D == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        flag = true;
    }
    else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        flag = true;
    }
     
    return std::make_tuple(flag, x1, x2);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Начата работа функции вычисления действительных корней квадратного уравнения...\n";
    double a = 1;
    double b = -6;
    double c = 9;
    double x1 = 0;
    double x2 = 0;

    Tuple t = Myroot(a, b, c, x1, x2);
    
    if (std::get<0>(t)) {
        fmt::print("Корни уравнения x1 = {}, x2 = {}\n", std::get<1>(t), std::get<2>(t));
    }
    else {
        std::cout << "Корней уравнения нет\n";
    }
}
