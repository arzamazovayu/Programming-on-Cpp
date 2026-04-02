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

    do {
        if (a > b)
            a -= b;
        else
            b -= a;
    } while (a != b);
    
    cout << "��� = " << a << endl;
}
