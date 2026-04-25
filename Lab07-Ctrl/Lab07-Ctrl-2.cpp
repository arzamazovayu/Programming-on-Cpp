#include <iostream>
#include <windows.h>
#include <fmt/core.h>

struct Roots {
    double x1;
    double x2;
};

Roots Myroot(double a, double b, double c, double& x1, double& x2) {

    Roots r;
    double D = pow(b, 2) - 4 * a * c;

    if (D < 0) {
        
    }
    else if (D == 0) {
        x1 = -b / (2 * a);
        x2 = x1;
        r.x1 = x1;
        r.x2 = x2;
        
    }
    else {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        r.x1 = x1;
        r.x2 = x2;
        
    }
    return r;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Начата работа функции вычисления действительных корней квадратного уравнения...\n";
    double a = 1;
    double b = 4;
    double c = 5;
    double x1 = 0;
    double x2 = 0;

    Roots R = Myroot(a, b, c, x1, x2);

    fmt::print("Корни уравнения x1 = {}, x2 = {}\n", R.x1, R.x2);
}
