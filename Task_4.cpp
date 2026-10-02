#include <iostream>

int main() {
    int X, Y;
    double A, B, C, K;

    std::cout << "Введите два целых числа (X и Y): ";
    if (!(std::cin >> X >> Y)) {
        std::cerr << "Ошибка ввода целых чисел!" << std::endl;
        return 1;
    }

    std::cout << "Введите три различных вещественных числа (A, B, C): ";
    if (!(std::cin >> A >> B >> C)) {
        std::cerr << "Ошибка ввода вещественных чисел!" << std::endl;
        return 1;
    }

    std::cout << "Введите число K: ";
    if (!(std::cin >> K)) {
        std::cerr << "Ошибка ввода числа K!" << std::endl;
        return 1;
    }

    if (X < Y) {
        X = 0;
    } else if (Y < X) {
        Y = 0;
    } else { // Если X == Y
        X = 0;
        Y = 0;
    }
    if (A > B && A > C) {
        A = A - K; 
    } else if (B > A && B > C) {
        B = B - K;
    } else {
        C = C - K;
    }

    std::cout << "\n--- Результаты ---" << std::endl;
    std::cout << "X = " << X << ", Y = " << Y << std::endl;
    std::cout << "A = " << A << ", B = " << B << ", C = " << C << std::endl;

    return 0;
}
