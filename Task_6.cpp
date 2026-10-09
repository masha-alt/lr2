#include <iostream>
#include <cmath> 

int main() {
    double x, p, K, D, C;

    std::cout << "Введите значение x: ";
    std::cin >> x;

    std::cout << "Введите значение p: ";
    std::cin >> p;

    std::cout << "Введите значение K: ";
    std::cin >> K;

    std::cout << "Введите значение D: ";
    std::cin >> D;

    std::cout << "Введите значение C: ";
    std::cin >> C;

    double A = x + std::sin(p);
    double B = std::exp(K); 

    if (A == 0 || B == 0) {
        std::cerr << "\nОшибка: деление на ноль (2*A*B == 0)!" << std::endl;
        return 1;
    }

    double y = 1.0 + (K * K) / (2.0 * A * B) - B + D * C;

    std::cout << "\nРезультат y = " << y << std::endl;

    return 0;
}
