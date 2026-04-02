#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b, temp;
    cout << "a = \n"; cin >> a;
    cout << "b = \n"; cin >> b;

    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    cout << "НОД = " << a << endl;
}
