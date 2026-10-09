#include <iostream>
#include <cmath> 

using namespace std;

int main() {

    double x, y, z, K, C, D;

    cout << "Введите x: "; cin >> x;
    cout << "Введите y: "; cin >> y;
    cout << "Введите z (число >= 0): "; cin >> z;
    cout << "Введите K: "; cin >> K;
    cout << "Введите C: "; cin >> C;
    cout << "Введите D: "; cin >> D;

    if (z < 0) {
        cout << "Ошибка: подкоренное выражение z не может быть отрицательным!" << endl;
        return 1;
    }
    if (K - C * D == 0) {
        cout << "Ошибка: знаменатель (K - CD) равен нулю! Деление на ноль." << endl;
        return 1;
    }

    double A = x - y;
    double B = sqrt(z);

    double T_mult = cos(x) + (pow(A, 2) / (K - C * D)) * B;

    double T_sub = cos(x) + (pow(A, 2) / (K - C * D)) - B;

    cout << "\nРезультаты расчета" << endl;
    cout << "Если это умножение (* B): T = " << T_mult << endl;
    cout << "Если это вычитание (- B): T = " << T_sub << endl;

    return 0;
}
