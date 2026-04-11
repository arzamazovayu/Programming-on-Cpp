#include <iostream>
#include <windows.h>
#include <cmath>

bool triangleCheck(float a1, float a2, float a3) {
	if ((a1 + a2 > a3) && (a1 + a3 > a2) && (a2 + a3 > a1) && (a1 > 0) && (a2 > 0) && (a3 > 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool triangleCheck(float a) {
	if (a > 0) {
		return true;
	}
	else { return false; }
}

float Geron(float a1, float a2, float a3) {
	if (triangleCheck(a1, a2, a3)) {
		float p = (a1 + a2 + a3) / 2;
		float S = std::sqrt(p * (p - a1) * (p - a2) * (p - a3));
		return S;
	}
	else {
		std::cout << "Такой треугольник не существует!";
		return 0;
	}
}

float Geron(float a1) {
	if (triangleCheck(a1)) {
		float p = (a1 * 3) / 2;
		float b = p - a1;
		float S = std::sqrt(p * b * b * b);
		return S;
	}
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	int vibor = 2;
	while (vibor != 0 && vibor != 1) {
		std::cout << "Укажите тип треугольника. Равносторонний: 1, иной: 0 \n";
		std::cin >> vibor;
	}
	if (vibor == 1) {
		int a;
		std::cout << "Введите длину стороны: \n";
		std::cin >> a;
		std::cout << "S = " << Geron(a);
	}
	else {
		int a;
		std::cout << "Введите длину стороны a:\n";
		std::cin >> a;
		int b;
		std::cout << "Введите длину стороны b:\n";
		std::cin >> b;
		int c;
		std::cout << "Введите длину стороны c:\n";
		std::cin >> c;
		std::cout << "S = " << Geron(a, b, c);
	}
}
