#include <iostream>
#include <windows.h>

using namespace std;

bool Input(int &a, int &b) {
    cout << "Введите значения a и b:\n";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        return false;
    }
    return true;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    int a, b;
    if (Input(a, b) == false) 
    {
        cerr << "error";
        return 1;
    }

    int s = a + b;
    return 0;
}
