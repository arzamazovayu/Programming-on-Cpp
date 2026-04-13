#include <iostream>
#include <windows.h>
#include <fmt/core.h>

int Myroot(double, double, double, double&, double&);

int Myroot(double a, double b, double c, double &x1, double &x2) {

    double D = pow(b, 2) - 4 * a * c;

    if (D < 0) {
        return -1;
    } else if(D == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        return 0;
    }
    else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        return 1;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Начата работа функции вычисления действительных корней квадратного уравнения...\n";
    double a = 2;
    double b = 5;
    double c = 3;
    double x1 = 0;
    double x2 = 0;

    int flag = Myroot(a, b, c, x1, x2);

    if (flag == -1) {
        std::cout << "Корней уравнения нет\n";
    }
    else if (flag == 0) {
        fmt::print("Корень уравнения один x1 = x2 = {}\n", x1);
    }
    else {
        fmt::print("Корни уравнения x1 = {}, x2 = {}\n", x1, x2);
    }
    return 0;
}
