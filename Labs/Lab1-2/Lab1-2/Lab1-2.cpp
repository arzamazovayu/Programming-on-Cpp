
#include <iostream>

using namespace std;

int main()
{
	system("chcp 1251");
	cout.precision(3); //формат вывода: 3 знака
	string name;
	cout << "Введите своё имя\n";
	double a, b;
	cout << "Введите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
	//cout << sizeof(a / b) << ends << sizeof(x) << endl; //функция для расчета объема занимаемой памяти
	return 0;
}

