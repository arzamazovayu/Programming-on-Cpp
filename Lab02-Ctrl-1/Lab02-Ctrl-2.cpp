#include <iostream>
#include <windows.h>
#include <string>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    const int size = 9; //инициализация размера массива
    int snils[size]; //объявление массива

    std::string input;
    std::cout << "Введите номер СНИЛС:\n";
    std::getline(std::cin, input); //прочтение строки и запись её в переменную

    //извлечение 9 цифр из строки и заполнение массива
    int count = 0;
    std::string main_part = input.substr(0, 9);
    for (char c : main_part) {
        if (count < size) {
            snils[count++] = c - '0';
        }
    }

    //проверка на более чем 2 последовательно одинаковые цифры
    bool has_3_num = false;
    for (int i = 0; i < size - 2; i++) {
        if (snils[i] == snils[i + 1] && snils[i] == snils[i + 2]) {
            has_3_num = true;
            break;
        }
    }

    if (has_3_num) {
        std::cout << "Ошибка: более 2х одинаковых цифр подряд в СНИЛС!\n";
        std::cout << "false";
        return 0;
    }

    //извлечение 10 и 11 цифр из строки
    std::string control_num = input.substr(9, 2);
    int xx = std::stoi(control_num); //преобразование из строки в целочисленное значение, т.к. требуется двузначное число

    //вычисление суммы произведений
    int summult = 0;
    for (int k = 0; k < size; k++) {
        summult += snils[k] * (size - k);
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
