#include <iostream>
#include <cmath> 

int main() {
    setlocale(LC_ALL, "Russian");

    double x, K, D, p, n;

    std::cout << "Введите x (в радианах): ";
    std::cin >> x;
    std::cout << "Введите K: ";
    std::cin >> K;
    std::cout << "Введите D: ";
    std::cin >> D;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите n: ";
    std::cin >> n;

    if (K * D == 0) {
        std::cerr << "Ошибка: Знаменатель (K * D) не может быть равен нулю!" << std::endl;
        return 1;
    }

    double B = std::cos(x);
    double C = p - n;

    double Q = (B * B) / (K * D) + B * std::pow(C, 3);

    std::cout << "\nРезультаты расчетов:" << std::endl;
    std::cout << "B = " << B << std::endl;
    std::cout << "C = " << C << std::endl;
    std::cout << "Q = " << Q << std::endl;

    return 0;
}
