#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    srand(time(NULL));

    int a, b, c;
    int k = 0, n = 10;
    for (int i = 1;i <= n;i++)
    {
        // инициализация операндов случайными числами от 1 до 101
        a = rand() % 10 + 1;
        b = rand() % 10 + 1;
        cout << a << " * " << b << " = ";
        cin >> c;
        if (a * b != c)
        {
            k++;
            cout << "Error! ";
            cout << a << " * " << b << " = " << a * b << endl;
        }
    }
    cout << "Count error: " << k << endl;
    return 0;
}
