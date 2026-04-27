#include <iostream>
#include <windows.h>
#include "Time.h"

Time set_time() {
	
	int h;
	int m;
	int s;

	std::cout << "\nВведите количество часов: ";
	std::cin >> h;
	std::cout << "\nВведите количество минут: ";
	std::cin >> m;
	std::cout << "\nВведите количество секунд: ";
	std::cin >> s;

	return Time(h, m, s);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	std::cout << "Реализация класса Time.\n";

	std::cout << "Ввод Time1\n";
	Time time1 = set_time();
	std::cout << "Значения Time1:\n";
	time1.get_time();

	std::cout << "Ввод Time2\n";
	Time time2 = set_time();
	std::cout << "Значения Time2:\n";
	time2.get_time();

	Time time3 = time3.sum_time(time1, time2);

	std::cout << "Значения суммы Time1 и Time2:\n";
	time3.get_time();

	return 0;
}
