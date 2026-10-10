#include <iostream>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>

double cbrt_fixed(double val) {
    return (val < 0) ? -pow(-val, 1.0 / 3.0) : pow(val, 1.0 / 3.0);
}

void solve_cubic(double p, double q) {
    double Q = pow(p / 3.0, 3) + pow(q / 2.0, 2);
    const double PI = acos(-1.0);

    if (Q > 0) {
        double sqrt_Q = sqrt(Q);
        double u = cbrt_fixed(-q / 2.0 + sqrt_Q);
        double v = cbrt_fixed(-q / 2.0 - sqrt_Q);
        std::cout << "Корень: " << (u + v) << "\n";
    } 
    else if (Q == 0) {
        if (p == 0 && q == 0) {
            std::cout << "Корень: 0\n";
            return;
        }
        double root1 = 2.0 * cbrt_fixed(-q / 2.0);
        double root2 = -cbrt_fixed(-q / 2.0);
        
        std::set<double> roots = {root1, root2};
        std::cout << "Корни: ";
        for (double r : roots) std::cout << r << " ";
        std::cout << "\n";
    } 
    else {
        double r = 2.0 * sqrt(-p / 3.0);
        double argument = -q / (2.0 * sqrt(pow(-p / 3.0, 3)));
        
        if (argument > 1.0) argument = 1.0;
        if (argument < -1.0) argument = -1.0;
        
        double phi = acos(argument);

        double root1 = r * cos(phi / 3.0);
        double root2 = r * cos((phi + 2.0 * PI) / 3.0);
        double root3 = r * cos((phi + 4.0 * PI) / 3.0);

        std::vector<double> roots = {root1, root2, root3};
        std::sort(roots.begin(), roots.end());

        std::cout << "Корни: ";
        for (double x : roots) std::cout << x << " ";
        std::cout << "\n";
    }
}

int main() {
    solve_cubic(-6, -20);
    return 0;
}
