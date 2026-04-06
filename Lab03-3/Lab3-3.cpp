#include <iostream>
#include <windows.h>
#include <fmt/core.h>

// Алгоритм в виде функции
long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a)
        {
            L = M;
        }
        else
        {
            R = M;
        }
    }
    return R;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double a = 0;
    int n = 11;

    while (a < 1 || a > 1000 || n > 10) {
        std::cout << "Введите 2 часла через пробел, где 1 <= a <= 1000 и n <= 10:\n";
        std::cin >> a >> n;
    }

    fmt::print("{:.6f}\n", firBinSearch(a, n));
    
    return 0;
}
