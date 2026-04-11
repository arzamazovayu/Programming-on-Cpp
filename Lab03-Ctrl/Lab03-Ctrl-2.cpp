#include <iostream>
#include <windows.h>
#include <cmath>

float powFun(int a) {
    float x3 = pow(a, 1.0 / 3);
    return x3;
}

float powIter(int a, int k) {
    if (a == 0) {
        return a;
    }

    float x = a / 3;
    
    for (int i = 0; i < k; ++i) {
        float xi = (1.0f / 3.0f) * ((a / (x * x)) + 2.0f * x);
        x = xi;
    }
    return x;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int x, y;
    std::cout << "Введите число для вычисления кубического корня и степень точности (х у): \n";
    std::cin >> x >> y;
    std::cout << powFun(x) << "\n";
    std::cout << powIter(x, y);
}
