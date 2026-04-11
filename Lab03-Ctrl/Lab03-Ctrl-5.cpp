#include <iostream>
#include <windows.h>

std::string decToBin(int n) {
    if (n == 0) {
        return "0";
    }

    if (n < 0) {
        return "Ошибка: введено отрицательнео число!";
    }

    std::string bin = "";
    while (n > 0) {
        if (n % 2 == 0) {
            bin = "0" + bin;
        }
        else {
            bin = "1" + bin;
        }
        n /= 2;
    }
    return bin;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int n;
    std::cout << "Введите положительное целое число для преобразования его в двоичную систему счисления: \n";
    std::cin >> n;
    std::cout << decToBin(n) << std::endl;
    return 0;
}
