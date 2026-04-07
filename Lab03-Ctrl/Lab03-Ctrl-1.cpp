#include <iostream>
#include <windows.h>
#include <string>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int size = 11; //инициализация размера массива
    int snils[size] = { 0 }; //инициализация массива

    std::string input;
    std::cout << "Введите номер СНИЛС:\n";
    std::getline(std::cin, input); //прочтение строки и запись её в переменную

    //извлечение 9 цифр из строки и заполнение массива
    int count = 0;
    
    for (char c : input) {
        if (!(std::isdigit(c) || c == ' ' || c == '-')) {
            std::cout << "Ошибка: неверный формат СНИЛС!\n";
            std::cout << "false";
            return 0;
        }
    }

    //std::string main_part = input.substr(0, 9);
    for (char c : input) {
        if (std::isdigit(c) && count < size) {
                snils[count++] = c - '0';
        }
    }

    /*std::cout << "массив snils\n";
    for (int d : snils) std::cout << d << " ";*/

    int main_part[size - 2]; //объявление массива для 9 цифр снилса
    for (int i = 0; i < size - 2; ++i) {
        main_part[i] = snils[i];
    }

    //проверка на более чем 2 последовательно одинаковые цифры
    bool has_3_num = false;
    for (int i = 0; i < size - 2; i++) {
        if (main_part[i] == main_part[i + 1] && main_part[i] == main_part[i + 2]) {
            has_3_num = true;
            break;
        }
    }

    if (has_3_num) {
        std::cout << "Ошибка: более 2х одинаковых цифр подряд в СНИЛС!\n";
        std::cout << "false";
        return 0;
    }

    //извлечение 10 и 11 цифр из массива
    int xx =  (snils[size-2] * 10) + snils[size - 1]; //сложение предпоследнего *10 и последнего значений массива

    //вычисление суммы произведений
    int summult = 0;
    for (int k = 0; k < size - 2; k++) {
        summult += main_part[k] * ((size - 2) - k);
    }

    //проверка, какое должно быть контрольное число
    int ctrlnum;
    if (summult < 100) {
        ctrlnum = summult;
    }
    else if (summult == 100 || summult == 101) {
        ctrlnum = 0;
    }
    else {
        int rem = summult % 101;
        if (rem < 100) {
            ctrlnum = rem;
        }
        else {
            ctrlnum = 0;
        };
    }

    //сравнение контрольных чисел и вывод
    std::string val = "true";
    if (xx == ctrlnum) {
        std::cout << "Валидность номера СНИЛС: " << val << "\n";
    }
    else {
        val = "false";
        std::cout << "Валидность номера СНИЛС: " << val << "\n";
    }

    std::cout << std::endl;
    return 0;
}
