#include <iostream>
#include <windows.h>

struct Time {
    int hours;
    int minutes;
    int seconds;

    void ShowTime() {
        int sec = (hours * 3600) + (minutes * 60) + seconds;
        std::cout << sec << " секунд\n";
    }
};

Time InputTime() {
    Time t;
    std::cout << "\nВведите количество часов: ";
    std::cin >> t.hours;
    std::cout << "\nВведите количество минут: ";
    std::cin >> t.minutes;
    std::cout << "\nВведите количество секунд: ";
    std::cin >> t.seconds;
    return t;
}

Time PlusTime(const Time &t1, const Time &t2) {
    Time t;
    t.hours = t1.hours + t2.hours;
    t.minutes = t1.minutes + t2.minutes;
    if (t.minutes >= 60) {
        t.minutes -= 60;
        t.hours++;
    }
    t.seconds = t1.seconds + t2.seconds;
    if (t.seconds >= 60) {
        t.seconds -= 60;
        t.minutes++;
    }
    return t;
}

Time MinusTime(const Time& t1, const Time& t2) {
    Time t;
    int sec1 = (t1.hours * 3600) + (t1.minutes * 60) + t1.seconds;
    int sec2 = (t2.hours * 3600) + (t2.minutes * 60) + t2.seconds;
    int secDif = sec1 - sec2;
    t.hours = secDif / 3600;
    t.minutes = (secDif % 3600) / 60;
    t.seconds = (secDif % 3600) % 60;
    return t;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Добро пожаловать в Time!\n";
    Time t1 = InputTime();
    Time t2 = InputTime();
    Time t3 = PlusTime(t1, t2);
    Time t4 = MinusTime(t1, t2);

    std::cout << "Ваше первое время:\n";
    t1.ShowTime();
    std::cout << "Ваше второе время:\n";
    t2.ShowTime();
    std::cout << "Сумма времён:\n";
    t3.ShowTime();
    std::cout << "Разница времён:\n";
    t4.ShowTime();
}
