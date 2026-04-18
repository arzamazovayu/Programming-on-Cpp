#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::cout << "Напишите маленький стих (на английском): ";
    std::string str;
    std::getline(std::cin, str);

    std::ofstream out("literature.txt");
    if (!out) {
        std::cout << "Файл открыть невозможно\n";
        return 1;
    }

    out << str;
    out.close();
    return 0;
}
