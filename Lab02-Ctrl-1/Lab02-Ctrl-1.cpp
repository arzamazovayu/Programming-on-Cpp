#include <iostream>
#include <windows.h>
#include <cmath>
#include <vector>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Привет мир!\n";
    
    int numb, d;
    std::cout << "Введите число:\n";
    std::cin >> numb;
    //отбрасываем первые и отрицательные числа для простоты
    if (numb <= 1) {
        std::cout << "Непростое число\n";
        return 0;
    }

    if (numb == 2) {
        std::cout << "Не суперпростое";
        return 0;
    }

    if (numb == 3) {
        std::cout << "Суперпростое";
        return 0;
    }
    //вычисляем простоту числа
    bool is_simple = true; //маркер простоты
    for (d = 2; d <= std::sqrt(numb); d++)
    {
        if (numb % d == 0)
        {
            is_simple = false; //меняем маркер, если непростое
            break;
        }
    }

    if (!is_simple) {
        std::cout << "Непростое число\n";
        return 0;
    }
    //создаем вектор для наполнения простыми числами
    std::vector<int> simple;
    int pos; //позиция искомого числа
    //перебор всех чисел от 2 до искомого
    for (int c = 2; c <= numb; c++)
    {
        bool is_c_simple = true;
        for (int x = 2; x <= std::sqrt(c); x++) //с проверкой на простоту...
        {
            if (c % x == 0)
            {
                is_c_simple = false;
                break;
            }
        }
        if (is_c_simple) { //...и записью в вектор при подтверждении простоты
            simple.push_back(c);
        }
    }
    

    /*std::cout << "Все сохранённые числа: ";
    for (size_t j = 0; j < simple.size(); ++j) {
        std::cout << simple[j] << " ";
    }*/

    pos = simple.size(); //определение позиции искомого числа (всегда последнее)
    
    int n;
    bool is_pos_simple = true; //маркер простоты позиции
    for (n = 2; n <= std::sqrt(pos); n++) //проверка позиции на простоту
    {
        if (pos % n == 0)
        {
            is_pos_simple = false;
            break;
        } 
    }

    if (is_pos_simple) {
        std::cout << "Суперпростое\n";
    }
    else {
        std::cout << "Не суперпростое число\n";
    }
    
    std::cout << "Конец программы...";
    return 0;
}
