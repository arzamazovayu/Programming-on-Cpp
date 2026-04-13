#include <iostream>
#include <windows.h>

using namespace std;

void swap(int*, int*);
void swap(int&, int&);

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void swap(int& x, int& y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void print(double x, double y)
{
    cout << "x = " << x << "; y = " << y << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Привет мир!\n";

    int x = 5, y = 10;
    print(x, y);
    swap(&x, &y);
    print(x, y);
    swap(x, y);
    print(x, y);
    return 0;
}
