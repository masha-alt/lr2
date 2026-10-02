#include <iostream>

int main() {
    double x, y, z;
    
    std::cout << "Введите три положительных числа (x, y, z): ";
    if (!(std::cin >> x >> y >> z)) {
        std::cerr << "Ошибка ввода! Ожидались вещественные числа." << std::endl;
        return 1;
    }

    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        std::cout << "Треугольник со сторонами " << x << ", " << y << ", " << z << " СУЩЕСТВУЕТ." << std::endl;
    } else {
        std::cout << "Треугольник со сторонами " << x << ", " << y << ", " << z << " НЕ СУЩЕСТВУЕТ." << std::endl;
    }

    return 0;
}
