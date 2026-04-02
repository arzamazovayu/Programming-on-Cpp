#include <iostream>
#include <windows.h>
#include <math.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x, x1, x2, y;
    cout << "x1 = \n"; cin >> x1;
    cout << "x2 = \n"; cin >> x2;

    cout << "\tx\tsin(x)\n";

    x = x1;
    while (x <= x2)
    {
        y = sin(x);
        cout << "\t" << x << "\t" << y << endl;
        x = x + 0.01;
    }
    return 0;
}
