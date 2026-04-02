#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int currency;
    std::cout << "Внесите сумму для размена\n";
    std::cin >> currency;

    int ten = 0;
    int five = 0;
    int two = 0;
    int one = 0;

    ten = currency / 10;
    int remten = currency % 10;
    five = remten / 5;
    int remfive = remten % 5;
    two = remfive / 2;
    int remtwo = remfive % 2;
    one = remtwo / 1;

    std::cout << "Десяток: " << ten << "\n";
    std::cout << "Пятёрок: " << five << "\n";
    std::cout << "Двоек: " << two << "\n";
    std::cout << "Однорублёвых: " << one << "\n";
    return 0;
}
