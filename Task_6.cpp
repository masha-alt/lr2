#include <iostream>
#include <cmath> 

int main() {
    double K, n, m, x;

    std::cout << "Введите значение K: ";
    std::cin >> K;
    std::cout << "Введите значение n: ";
    std::cin >> n;
    std::cout << "Введите значение m: ";
    std::cin >> m;
    std::cout << "Введите значение x (в радианах): ";
    std::cin >> x;

    double A = std::abs(n + m);
    double D = std::tan(x);

    if (A == 0) {
        std::cerr << "Ошибка: Деление на ноль! Сумма (n + m) не должна быть равна 0." << std::endl;
        return 1;
    }

    double y = 1.29 + (K / A) + std::pow(D, 2);

    std::cout << "Результат y = " << y << std::endl;

    return 0;
}

