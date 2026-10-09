#include <iostream>
#include <cmath> 

int main() {
   
    double x, y, C, K;

    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите y: ";
    std::cin >> y;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите K: ";
    std::cin >> K;

    if (C == 0 || K == 0) {
        std::cout << "Ошибка: переменные C и K не должны быть равны 0!" << std::endl;
        return 1;
    }

    double A = x + y;
    double D = std::abs(C - A);

    double S = 10.1 + (A / C) + (D / std::pow(K, 2));

    std::cout << "Результат S = " << S << std::endl;

    return 0;
}
