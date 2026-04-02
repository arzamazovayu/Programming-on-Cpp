#include <iostream>
#include <windows.h>
#include <cmath>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int n;
    float x, y;
    float shot;
    int score = 0;
    int max_score;
    
    std::cout << "Добро пожаловать в тир, стрелок! Выбери режим стрельбы: \n";
    std::cout << "Стрельба на очки, введи [0]\nСтрельба на попытки, введи количество попыток [n]\n";
    std::cin >> n;

    while (n > 10) {
        std::cout << "Многовато будет, давай не больше 10\n";
        std::cin >> n;
    }

     if (n > 0) {
        max_score = n * 10;
        std::cout << "У тебя есть " << n << " попыток, ты должен набрать " << max_score << " очков.\n";

        for (n; n > 0; n--) {
            std::cout << "Введи координаты выстрела в виде : x y \n";
            std::cin >> x >> y;
            shot = std::sqrt(std::pow(0 - x, 2) + std::pow(0 - y, 2));
            if (std::abs(shot) < 1) {
                std::cout << "10 очков!\n";
                score += 10;
            }
            else if (std::abs(shot) < 2) {
                std::cout << "5 очков!\n";
                score += 5;
            }
            else {
                std::cout << "Мимо!\n";
            }
        }

        std::cout << "Ваш результат: \n" << score << " очков \n";

        if (score > max_score * 0.7) {
            std::cout << "Ваш ранг: Снайпер\n";
            return 0;
        }
        else if (score > max_score * 0.3) {
            std::cout << "Ваш ранг: Стрелок\n";
            return 0;
        }
        else {
            std::cout << "Ваш ранг: Новичок\n";
            return 0;
        }
    }
    else {
        std::cout << "Введи максимальное количество очков, которое хочешь настрелять: \n";
        std::cin >> max_score;
        while (max_score > 50) {
            std::cout << "Многовато будет, давай не больше 50\n";
            std::cin >> max_score;
        }
        int fix_max_score = max_score;

        for (score = 0; max_score > 0; score++) {
            std::cout << "Введи координаты выстрела в виде : x y \n";
            std::cin >> x >> y;
            shot = std::sqrt(std::pow(0 - x, 2) + std::pow(0 - y, 2));
            if (std::abs(shot) < 1) {
                std::cout << "10 очков!\n";
                max_score -= 10;
            }
            else if (std::abs(shot) < 2) {
                std::cout << "5 очков!\n";
                max_score -= 5;
            }
            else {
                std::cout << "Мимо!\n";
            }
        }

        std::cout << "Ваш результат: \n" << score << " попыток \n";

        if (score < fix_max_score * 0.13) {
            std::cout << "Ваш ранг: Снайпер\n";
            return 0;
        }
        else if (score < fix_max_score * 0.17) {
            std::cout << "Ваш ранг: Стрелок\n";
            return 0;
        }
        else {
            std::cout << "Ваш ранг: Новичок\n";
            return 0;
        }
    }
}
