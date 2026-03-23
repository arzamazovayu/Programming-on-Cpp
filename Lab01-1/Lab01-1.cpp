
#include <iostream>
#include<string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    string name;
    cout << "What is your name?\n";
    getline(cin, name);
    cout << "Hello, " << name << "!\n";
}
