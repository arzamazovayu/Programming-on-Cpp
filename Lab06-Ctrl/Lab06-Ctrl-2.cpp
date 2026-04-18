#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

void sort(int[], const int);

void sort(int Arr[], const int n) {
    int min = 0; // дл¤ записи минимального значени¤
    int buf = 0; // дл¤ обмена значени¤ми

    for (int i = 0; i < n; i++)
    {
        min = i; // номер текущей ¤чейки, как ¤чейки с минимальным значением
        // в цикле найдем реальный номер ¤чейки с минимальным значением
        for (int j = i + 1; j < n; j++)
            min = (Arr[j] < Arr[min]) ? j : min;
        // перестановка этого элемента, помен¤в его местами с текущим
        if (i != min)
        {
            buf = Arr[i];
            Arr[i] = Arr[min];
            Arr[min] = buf;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int N = 10;
    int a[N] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    
    ofstream out("arrays.txt");
    if (!out) {
        cout << "невозможно открыть файл\n";
        return 1;
    }

    out << "Массив до сортировки: ";
    for (int i = 0; i < N; ++i) {
        out << a[i] << " ";
    }
    out << endl;

    sort(a, N);

    out << "Массив после сортировки: ";
    for (int i = 0; i < N; ++i) {
        out << a[i] << " ";
    }
    out << endl;

    out.close();
    return 0;
}