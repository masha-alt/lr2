#include <iostream>
#include <cmath> 

int main() {
    double x, k, z, C, D;

    std::cout << "Введите значения x, k, z, C, D через пробел: ";
    if (!(std::cin >> x >> k >> z >> C >> D)) {
        std::cerr << "Ошибка ввода данных!" << std::endl;
        return 1;
    }

    if (x <= 0) {
        std::cerr << "Ошибка: x должен быть больше 0 для вычисления ln(x)." << std::endl;
        return 1;
    }
    if (z < 0) {
        std::cerr << "Ошибка: z не может быть отрицательным для вычисления корня." << std::endl;
        return 1;
    }

    double A = std::log(x) - k;
    double B = std::sqrt(z);

    if (A == 0) {
        std::cerr << "Ошибка: деление на ноль (знаменатель 0.75 * A равен 0)." << std::endl;
        return 1;
    }

    double Y = std::pow(D, 2) + (std::pow(C, 2) / (0.75 * A)) + B;

    std::cout << "Результат Y = " << Y << std::endl;

    return 0;
}
