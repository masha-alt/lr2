#include <iostream>

int main() {
    double X, Y;
    std::cout << "--- Ветка control (без тернарной операции и без bool) ---" << std::endl;
    std::cout << "Введите два вещественных числа X и Y: ";
    if (!(std::cin >> X >> Y)) {
        std::cerr << "Ошибка ввода!" << std::endl;
        return 1;
    }

    double max_val;

    if (X > Y) {
        max_val = X;
    } else {
        max_val = Y;
    }

    std::cout << "Максимальное число: " << max_val << std::endl;
    return 0;
}

