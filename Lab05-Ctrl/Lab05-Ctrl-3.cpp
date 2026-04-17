#include <iostream>
#include <windows.h>
#include <fmt/core.h>

int search(int* arr, const int size, const int key) {

    int temp = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            if (i != 0) {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
            }
            return i;
        }
    }
    return -1;
}

void print(int res_as_orig_pos, int key) {
    int pos_after_transpos = 0; 
    if (res_as_orig_pos != 0) {
        pos_after_transpos = res_as_orig_pos - 1;
    }
    if (res_as_orig_pos != -1) {
        fmt::print("Число {} найдено на позиции {}\nТеперь оно на позиции {}\n", key, res_as_orig_pos, pos_after_transpos);
    }
    else { fmt::print("Элемент {} не найден!\n", key); }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int cont = 1;
    const int n = 10;
    int arr[n] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int result = 0;

    do {
        int key;
        std::cout << "Введине целое число для поиска:\n";
        std::cin >> key;
        result = search(arr, n, key);
        print(result, key);
        std::cout << "Хотите продолжить? Да = 1, Нет = 0\n";
        std::cin >> cont;
    } while (cont == 1);
}
