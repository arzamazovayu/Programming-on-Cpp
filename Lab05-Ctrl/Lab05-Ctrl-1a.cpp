#include <iostream>
#include <windows.h>

using namespace std;

void show_array(const int[], const int);
int arr_sum(const int[], const int);
float arr_av(const int[], const int);
int arr_neg_sum(const int[], const int);
int arr_pos_sum(const int[], const int);
int arr_even_sum(const int[], const int);
int arr_odd_sum(const int[], const int);

void show_array(const int Arr[], const int n)
{
    for (int i = 0; i < n; i++)
        cout << Arr[i] << " ";
    cout << "\n";
}

int arr_sum(const int Arr[], const int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += Arr[i];
    }
    return s;
}

float arr_av(const int Arr[], const int n ) {
    float av = 0.0f;
    av = (float)arr_sum(Arr, n) / n;
    return av;
}

int arr_neg_sum(const int Arr[], const int n) {
    int sNeg = 0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] < 0) {
            sNeg += Arr[i];
        }
    }
    return sNeg;
}

int arr_pos_sum(const int Arr[], const int n) {
    int sPos = 0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] >= 0) {
            sPos += Arr[i];
        }
    }
    return sPos;
}

int arr_even_sum(const int Arr[], const int n) {
    int sEven = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] % 2 == 0) {
            sEven += Arr[i];
        }
    }
    return sEven;
}

int arr_odd_sum(const int Arr[], const int n) {
    int sOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (Arr[i] % 2 != 0) {
            sOdd += Arr[i];
        }
    }
    return sOdd;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    const int n = 10;
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    
    cout << "Сумма элементов массива:" << arr_sum(mas, n) << "\n";

    cout << "Среднее значение элементов массива:" << arr_av(mas, n) << "\n";

    cout << "Сумма отрицательных элементов массива:" << arr_neg_sum(mas, n) << "\n";

    cout << "Сумма положительных элементов массива:" << arr_pos_sum(mas, n) << "\n";

    cout << "Сумма чётных элементов массива:" << arr_even_sum(mas, n) << "\n";

    cout << "Сумма нечётных элементов массива:" << arr_odd_sum(mas, n) << "\n";
    
    delete[] mas; //освобождение памяти
    mas = nullptr; //обнуление указателя
    return 0;
}
