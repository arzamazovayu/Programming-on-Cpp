#include <iostream>
#include <windows.h>
#include "Time.h"

Time set_time() {

	int h = 0, m = 0, s = 0;
	std::string input_h, input_m, input_s;

	try {
		std::cout << "\nВведите количество часов: ";
		std::cin >> input_h;
		try {
			h = std::stoi(input_h);
		}
		catch (const std::invalid_argument&) {
			throw Time::ExTime::ExTime("в функции set_time() при вводе часов ", input_h);
		}
		std::cout << "\nВведите количество минут: ";
		std::cin >> input_m;
		try {
			m = std::stoi(input_m);
		}
		catch (const std::invalid_argument&) {
			throw Time::ExTime::ExTime("в функции set_time() при вводе минут ", input_m);
		}
		std::cout << "\nВведите количество секунд: ";
		std::cin >> input_s;
		try {
			s = std::stoi(input_s);
		}
		catch (const std::invalid_argument&) {
			throw Time::ExTime::ExTime("в функции set_time() при вводе секунд ", input_s);
		}
	}
	catch (Time::ExTime& ex) {
		std::cout << "\nОшибка инициализации" << ex.funcName;
		std::cout << "\nВведенное значение параметра " << ex.value << " является недопустимым\n";
		return Time();
	}

	return Time(h, m, s);
}

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	std::cout << "Реализация класса Time.\n";

	Time time1 = Time();
	try {
		std::cout << "Ввод Time1\n";
		time1 = set_time();
		std::cout << "Значения Time1:\n";
		time1.get_time();
	}
	catch (Time::ExTime& ex) {
		std::cout << "\nОшибка значения " << ex.funcName;
		std::cout << "\nВведенное отрицательное значение параметра " << ex.value << " является недопустимым\n";
		return 1;
	}

	Time time2 = Time();
	try{
		std::cout << "Ввод Time2\n";
		time2 = set_time();
		std::cout << "Значения Time2:\n";
		time2.get_time();
	}
	catch (Time::ExTime& ex) {
		std::cout << "\nОшибка значения " << ex.funcName;
		std::cout << "\nВведенное отрицательное значение параметра " << ex.value << " является недопустимым\n";
		return 1;
	}

	Time time3 = time1.sum_time(time1, time2);

	std::cout << "Значения суммы Time1 и Time2:\n";
	time3.get_time();

	return 0;
}
