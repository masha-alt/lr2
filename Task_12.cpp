#include <iostream>
#include <cmath>
#include <set>
#include <iomanip>

void solve_biquadratic(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) std::cout << "Бесконечно много корней\n";
            else std::cout << "Нет корней\n";
        } else {
            double target = -c / b;
            if (target > 0) {
                std::cout << "Корни: " << -sqrt(target) << " " << sqrt(target) << "\n";
            } else if (target == 0) {
                std::cout << "Корень: 0\n";
            } else {
                std::cout << "Нет вещественных корней\n";
            }
        }
        return;
    }

    double D = b * b - 4 * a * c;
    if (D < 0) {
        std::cout << "Нет вещественных корней\n";
        return;
    }

    std::set<double> t_roots;
    if (D == 0) {
        t_roots.insert(-b / (2 * a));
    } else {
        t_roots.insert((-b + sqrt(D)) / (2 * a));
        t_roots.insert((-b - sqrt(D)) / (2 * a));
    }

    std::set<double> x_roots;
    for (double t : t_roots) {
        if (t > 0) {
            x_roots.insert(sqrt(t));
            x_roots.insert(-sqrt(t));
        } else if (t == 0) {
            x_roots.insert(0.0);
        }
    }

    if (x_roots.empty()) {
        std::cout << "Нет вещественных корней\n";
    } else {
        std::cout << "Корни: ";
        for (double x : x_roots) std::cout << x << " ";
        std::cout << "\n";
    }
}

int main() {
    solve_biquadratic(1, -5, 4); 
    return 0;
}
