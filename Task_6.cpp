#include <iostream>
#include <cmath> 

int main() {

    double x, d, C, K;

    std::cout << "Введите значения переменных:\n";
    std::cout << "x = ";
    std::cin >> x;
    std::cout << "d = ";
    std::cin >> d;
    std::cout << "C = ";
    std::cin >> C;
    std::cout << "K = ";
    std::cin >> K;

    if (x <= 0) {
        std::cerr << "Ошибка: переменная 'x' должна быть больше 0 для вычисления логарифмаlg(x)!\n";
        return 1;
    }
    if (K == 0) {
        std::cerr << "Ошибка: переменная 'K' не может быть равна 0 (деление на ноль)!\n";
        return 1;
    }

    double A = std::log10(x); 
    double B = x + std::exp(d); 

    double Y = (A + B) * ((C * C) / K);

    std::cout.precision(6);
    std::cout << "\nРезультат: Y = " << Y << std::endl;

    return 0;
}
