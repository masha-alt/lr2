#include <iostream>
#include <cmath>   

int main() {
    double x, z, p, K, C, D;

    std::cout << "Введите значения x, z, p, K, C, D через пробел: ";
    if (!(std::cin >> x >> z >> p >> K >> C >> D)) {
        std::cerr << "Ошибка ввода! Ожидались числовые значения." << std::endl;
        return 1;
    }

    if (C * D == 0) {
        std::cerr << "Ошибка: произведение C * D равно нулю (деление на ноль)!" << std::endl;
        return 1;
    }

    double A = std::sin(x) - z;
    double B = std::abs(p - x);

    double Y = std::pow(A + B, 2) - K / (C * D);

    std::cout << "Результат Y = " << Y << std::endl;

    return 0;
}
