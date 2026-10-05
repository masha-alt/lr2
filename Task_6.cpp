#include <iostream>
#include <cmath> 

using namespace std;

int main() {

    double x, D;

    cout << "Расчет соотношения (Вариант 1)" << endl;
    cout << "Введите значение x (в радианах): ";
    cin >> x;
    cout << "Введите значение D: ";
    cin >> D;

    double b = x + D;

    if (b == 0) {
        cout << "Ошибка: Знаменатель b равен нулю (x + D = 0). Расчет невозможен." << endl;
        return 1;
    }

    double A = (D * x) / b;

    double denominator = pow(D, 3) + (A + D - b);

    if (denominator == 0) {
        cout << "Ошибка: Знаменатель основной дроби равен нулю. Расчет невозможен." << endl;
        return 1;
    }

    double S = (pow(A, 2) + b * cos(x)) / denominator;

    cout << "\nПромежуточные вычисления" << endl;
    cout << "b = " << b << endl;
    cout << "A = " << A << endl;
    cout << "-------------------------------" << endl;
    cout << "Результат S = " << S << endl;

    return 0;
}
