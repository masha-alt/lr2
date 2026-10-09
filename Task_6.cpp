#include <iostream>
#include <cmath> 
int main() {

    double x, p, h, K, C, D;
    
    std::cout << "Ввод исходных данных" << std::endl;
    std::cout << "Введите x: ";
    std::cin >> x;
    std::cout << "Введите p: ";
    std::cin >> p;
    std::cout << "Введите h (должно быть больше 0): ";
    std::cin >> h;
    std::cout << "Введите K: ";
    std::cin >> K;
    std::cout << "Введите C: ";
    std::cin >> C;
    std::cout << "Введите D: ";
    std::cin >> D;

    if (h <= 0) {
        std::cerr << "\nОшибка: Аргумент логарифма h должен быть строго больше нуля!" << std::endl;
        return 1;
    }
    if (K * C * D == 0) {
        std::cerr << "\nОшибка: Знаменатель K * C * D не должен быть равен нулю!" << std::endl;
        return 1;
    }

    double A = x - p;
    double B = std::log(h); 

    double Y = 0.78 * B + std::pow(A, 3) / (K * C * D);

    std::cout << "\nРезультаты расчетов" << std::endl;
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;
    std::cout << "Y = " << Y << std::endl;

    return 0;
}
