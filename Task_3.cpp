#include <iostream>

int main() {
    double b1;

    std::cout << "Введите первый член геометрической прогрессии (b1): ";
    if (!(std::cin >> b1)) {
        std::cerr << "Ошибка ввода! Ожидалось вещественное число." << std::endl;
        return 1;
    }

    const int n = 4;
    double q = 1.0 / (n + 1); // q = 1 / 5 = 0.2

    double S = b1 / (1.0 - q);

    std::cout << "Знаменатель прогрессии q = " << q << std::endl;
    std::cout << "Сумма всех членов прогрессии S = " << S << std::endl;

    return 0;
}
