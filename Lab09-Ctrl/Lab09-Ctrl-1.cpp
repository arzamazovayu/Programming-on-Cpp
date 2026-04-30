#include <iostream>
#include <fmt/core.h>
#include <cmath>
#include <windows.h>

class Triangle {
private:
    double a;
    double b;
    double c;
public:
    class ExSide //класс исключений
    {
    public:
        std::string origin; //для имени функции
        int iValue; //для хранения ошибочного значения
        ExSide(std::string orig, double sc)
        {
            origin = orig; //строка с именем виновника ошибки
            iValue = sc; //сохраненное неправильное значение
        }
    };

    int set_triangle() {

        double a1;
        double a2;
        double a3;

        std::cout << "\nВведите 1-ю сторону: ";
        std::cin >> a1;
        std::cout << "\nВведите 2-ю сторону: ";
        std::cin >> a2;
        std::cout << "\nВведите 3-ю сторону: ";
        std::cin >> a3;

        if (check_triangle(a1, a2, a3)) {
            Triangle::a = a1;
            Triangle::b = a2;
            Triangle::c = a3;
            return 0;
        }
        else {
            return 1;
        }
    }

    bool check_triangle(double a1, double a2, double a3) {
        if ((a1 + a2 < a3))
        {
            throw ExSide("в функции set_triangle()", a3);
            return false;
        }
        else if ((a1 + a3 < a2)) {
            throw ExSide("в функции set_triangle()", a2);
            return false;
        }
        else if ((a2 + a3 < a1)) {
            throw ExSide("в функции set_triangle()", a1);
            return false;
        }
        else if ((a1 < 0)) {
            throw ExSide("в функции set_triangle()", a1);
            return false;
        }
        else if ((a2 < 0)) {
            throw ExSide("в функции set_triangle()", a2);
            return false;
        }
        else if ((a3 < 0)) {
            throw ExSide("в функции set_triangle()", a3);
            return false;
        }
        else return true;
    }

    double calculate_triangle(Triangle t) {
        double p = (t.a + t.b + t.c) / 2;
        double S = sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
        return S;
    }
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    std::cout << "Вас приветствует программа расчёта площади треугольника!\n";
   
    Triangle* t = new Triangle;

    try {
        t->set_triangle();
    }
    catch (Triangle::ExSide& ex){
        std::cout << "\nОшибка инициализации" << ex.origin;
        std::cout << "\nВведенное значение стороны " << ex.iValue << " является недопустимым\n";
        return 1;
    }
    
    double S = t->calculate_triangle(*t);

    fmt::print("Площадь треугольника {}\n", S);
    return 0;
}