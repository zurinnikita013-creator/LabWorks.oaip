#include <iostream>
using namespace std;


double divide(double a, double b) {
    if (b == 0) return 0;
    return a / b;
}


double area(double side) { 
    return side * side;
}

double area(double length, double width) { 
    return length * width;
}


double powerLoop(double a, int x) {
    double result = 1;
    for (int i = 0; i < x; i++) {
        result *= a;
    }
    return result;
}


double powerRecursive(double a, int x) {
    if (x == 0) return 1;
    if (x < 0) return 1 / powerRecursive(a, -x);
    return a * powerRecursive(a, x - 1);
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    cout << "Задание 1: Деление" << endl;
    cout << "10 / 2 = " << divide(10, 2) << endl;
    cout << "10 / 0 = " << divide(10, 0) << endl;

    cout << "\nЗадание 2: Площади" << endl;
    cout << "Площадь квадрата со стороной 5: " << area(5) << endl;
    cout << "Площадь прямоугольника 4x6: " << area(4, 6) << endl;

    cout << "\nЗадание 3: Степень через цикл" << endl;
    cout << "2^5 = " << powerLoop(2, 5) << endl;
    cout << "3^4 = " << powerLoop(3, 4) << endl;

    cout << "\nЗадание 4: Степень через рекурсию" << endl;
    cout << "2^5 = " << powerRecursive(2, 5) << endl;
    cout << "2^(-3) = " << powerRecursive(2, -3) << endl;

    return 0;
}
