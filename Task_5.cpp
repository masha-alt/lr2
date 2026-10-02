#include <iostream>

int main() {
    double X, Y;
    std::cout << "--- Ветка main (с тернарной операцией и bool) ---" << std::endl;
    std::cout << "Введите два вещественных числа X и Y: ";
    if (!(std::cin >> X >> Y)) {
        std::cerr << "Ошибка ввода!" << std::endl;
        return 1;
    }

    bool is_X_greater = (X > Y);

    double max_val = is_X_greater ? X : Y;

    std::cout << "Максимальное число: " << max_val << std::endl;
    return 0;
}
