#include <iostream>
#include <cmath>
#include <string>
#include <clocale>

int main() {
    std::setlocale(LC_ALL, "Russian");

    double z, a, b;
    std::cout << "Введите значение z: ";
    std::cin >> z;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    std::cout << "Введите значение b: ";
    std::cin >> b;

    double x = 0;
    std::string condition_msg = "";

    if (z < 1) {
        x = 2 + z;
        condition_msg = "Условие: z < 1, следовательно x = 2 + z";
    } else {
        x = std::pow(std::sin(z), 2);  
        condition_msg = "Условие: z >= 1, следовательно x = sin^2(z)";
    }

    int func_choice;
    std::cout << "\nВыберите функцию f(x):\n1) 2*x\n2) x^3\n3) x/3\nВаш выбор (1-3): ";
    std::cin >> func_choice;

    double phi = 0;
    std::string func_msg = "";

    switch (func_choice) {
        case 1:
            phi = 2 * x;
            func_msg = "Выбранная функция f(x) = 2x";
            break;
        case 2:
            phi = std::pow(x, 3);
            func_msg = "Выбранная функция f(x) = x^3";
            break;
        case 3:
            phi = x / 3.0;
            func_msg = "Выбранная функция f(x) = x/3";
            break;
        default:
            std::cout << "Ошибка: Неверный выбор функции!" << std::endl;
            return 1;
    }

    double numerator = 2 * a * phi + b * std::cos(std::sqrt(std::abs(x)));
    double denominator = x * x + 5;
    double y = numerator / denominator;

    std::cout << "\n================ Результаты ================" << std::endl;
    std::cout << condition_msg << " (получено x = " << x << ")" << std::endl;
    std::cout << func_msg << " (получено f(x) = " << phi << ")" << std::endl;
    std::cout << "Итоговое значение y = " << y << std::endl;
    std::cout << "============================================" << std::endl;

    return 0;
}
