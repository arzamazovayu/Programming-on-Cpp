#include <iostream>
#include <windows.h>

int sumFun(int n) {
    if (n > 0) {
        int S = 0;
        int n5 = n * 5;
        for (n5;n5 > 0; n5 -= 5) {
            S += n5;
        }
        return S;
    }
    else {
        std::cout << "Error: неверное число n!\n";
            return 0;
    }
    
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Введите целое число: \n";
    int n;
    std::cin >> n;
    std::cout << "Сумма ряда чисел равна " << sumFun(n);
    return 0;
}
