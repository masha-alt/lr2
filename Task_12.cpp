#include <iostream>
#include <cmath>
#include <set>

void solve_symmetric(double a, double b, double c) {
    if (a == 0) {
        std::set<double> roots;
        roots.insert(0.0);
        if (b != 0) {
            double D = c * c - 4 * b * b;
            if (D > 0) {
                roots.insert((-c + sqrt(D)) / (2 * b));
                roots.insert((-c - sqrt(D)) / (2 * b));
            } else if (D == 0) {
                roots.insert(-c / (2 * b));
            }
        }
        std::cout << "Корни: ";
        for (double x : roots) std::cout << x << " ";
        std::cout << "\n";
        return;
    }

    double D_t = b * b - 4 * a * (c - 2 * a);
    if (D_t < 0) {
        std::cout << "Нет вещественных корней\n";
        return;
    }

    std::set<double> t_roots;
    if (D_t == 0) {
        t_roots.insert(-b / (2 * a));
    } else {
        t_roots.insert((-b + sqrt(D_t)) / (2 * a));
        t_roots.insert((-b - sqrt(D_t)) / (2 * a));
    }

    std::set<double> x_roots;
    for (double t : t_roots) {
        double D_x = t * t - 4;
        if (D_x > 0) {
            x_roots.insert((t + sqrt(D_x)) / 2.0);
            x_roots.insert((t - sqrt(D_x)) / 2.0);
        } else if (D_x == 0) {
            x_roots.insert(t / 2.0);
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
    solve_symmetric(1, -5, 6);
    return 0;
}
