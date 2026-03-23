#include <iostream>
#include <string>
#include <chrono>
#include <cmath>
#include <fmt/core.h>
#include <fmt/chrono.h>

int main() {
	int x = 42;
	double pi = 2 * acos(0.0);
	auto now = std::chrono::system_clock::now();
	std::string name = "Alice";
	// Печать с форматированием
	fmt::print("Hello, {}, the answer is {}!\n", name, x);
	fmt::print("Hex: {:#x}\n", x); // шестнадцатеричное с префиксом 0x
	fmt::print("|{:>10}|\n", 42); // выравнивание вправо
	fmt::print("|{:<10}|\n", 42); // выравнивание влево
	fmt::print("|{:^10}|\n", 42); // выравнивание по центру
	fmt::print("Fixed: {:.2f}\n", pi); // 2 знака после запятой
	fmt::print("Scientific: {:.3e}\n", pi); // экспоненциальный формат
	std::string s = fmt::format("Pi ≈ {:.3f}", 3.14159);
	fmt::print("{}\n", s);
	fmt::print("Выполнение задания:\n");
	fmt::print("Dec: {}, Hex: {:#x}, Bin: {:b}\n", x, x, x);
	fmt::print("Default: {} | Fixed: {:.2f} | Sci: {:.3e}\n", pi, pi, pi);
	fmt::print("[{:%Y-%m-%d %H:%M:%S}] [INFO] Application started\n", now);
	fmt::print("[{:%Y-%m-%d %H:%M:%S}] [WARNING] Low disk space\n", now);
	fmt::print("[{:%Y-%m-%d %H:%M:%S}] [ERROR] Failed to open file\n", now);
	return 0;
}
