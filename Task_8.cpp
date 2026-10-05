#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double getDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {

    cout << fixed << setprecision(4);

    double x1, y1, x2, y2, x3, y3;
    cout << "Ввод координат вершин треугольника" << endl;
    cout << "Введите x1 y1 (вершина A): "; cin >> x1 >> y1;
    cout << "Введите x2 y2 (вершина B): "; cin >> x2 >> y2;
    cout << "Введите x3 y3 (вершина C): "; cin >> x3 >> y3;

    double a = getDistance(x2, y2, x3, y3); 
    double b = getDistance(x1, y1, x3, y3); 
    double c = getDistance(x1, y1, x2, y2); 

    cout << "\n1. СТОРОНЫ ТРЕУГОЛЬНИКА" << endl;
    cout << "Сторона a (BC) = " << a << endl;
    cout << "Сторона b (AC) = " << b << endl;
    cout << "Сторона c (AB) = " << c << endl;

    double P = a + b + c;
    double p = P / 2.0;

    double S_heron = sqrt(p * (p - a) * (p - b) * (p - c));

    double angleA_rad = acos((b * b + c * c - a * a) / (2.0 * b * c));
    double S_trig = 0.5 * b * c * sin(angleA_rad);

    double Line_A = y1 - y2;
    double Line_B = x2 - x1;
    double Line_C = x1 * y2 - x2 * y1;
    double h_c_dist = abs(Line_A * x3 + Line_B * y3 + Line_C) / sqrt(pow(Line_A, 2) + pow(Line_B, 2));
    double S_analytic = 0.5 * c * h_c_dist; 

    double S = S_heron; 

    cout << "\n8. ПЕРИМЕТР И ПЛОЩАДЬ (3 способами)" << endl;
    cout << "Периметр (P) = " << P << endl;
    cout << "Площадь (Способ 1 — Формула Герона) = " << S_heron << endl;
    cout << "Площадь (Способ 2 — Через две стороны и синус угла) = " << S_trig << endl;
    cout << "Площадь (Способ 3 — Расстояние от точки до прямой) = " << S_analytic << endl;

    double ha = (2.0 * S) / a;
    double hb = (2.0 * S) / b;
    double hc = (2.0 * S) / c;

    cout << "\n2. ВЫСОТЫ ТРЕУГОЛЬНИКА" << endl;
    cout << "Высота ha (к стороне a) = " << ha << endl;
    cout << "Высота hb (к стороне b) = " << hb << endl;
    cout << "Высота hc (к стороне c) = " << hc << endl;

    double ma = 0.5 * sqrt(2.0 * b * b + 2.0 * c * c - a * a);
    double mb = 0.5 * sqrt(2.0 * a * a + 2.0 * c * c - b * b);
    double mc = 0.5 * sqrt(2.0 * a * a + 2.0 * b * b - c * c);

    cout << "\n3. МЕДИАНЫ ТРЕУГОЛЬНИКА" << endl;
    cout << "Медиана ma (к стороне a) = " << ma << endl;
    cout << "Медиана mb (к стороне b) = " << mb << endl;
    cout << "Медиана mc (к стороне c) = " << mc << endl;

    double la = (2.0 * sqrt(b * c * p * (p - a))) / (b + c);
    double lb = (2.0 * sqrt(a * c * p * (p - b))) / (a + c);
    double lc = (2.0 * sqrt(a * b * p * (p - c))) / (a + b);

    cout << "\n4. БИССЕКТРИСЫ ТРЕУГОЛЬНИКА" << endl;
    cout << "Биссектриса la = " << la << endl;
    cout << "Биссектриса lb = " << lb << endl;
    cout << "Биссектриса lc = " << lc << endl;

    double radA = angleA_rad; 
    double radB = acos((a * a + c * c - b * b) / (2.0 * a * c));
    double radC = acos((a * a + b * b - c * c) / (2.0 * a * b));

    double degA = radA * (180.0 / M_PI);
    double degB = radB * (180.0 / M_PI);
    double degC = 180.0 - degA - degB; 
    double radC_fixed = degC * (M_PI / 180.0);

    cout << "\n5. УГЛЫ ТРЕУГОЛЬНИКА" << endl;
    cout << "Угол A: " << radA << " рад. | " << degA << "°" << endl;
    cout << "Угол B: " << radB << " рад. | " << degB << "°" << endl;
    cout << "Угол C: " << radC_fixed << " рад. | " << degC << "°" << endl;

    double r = S / p;
    double R = (a * b * c) / (4.0 * S);

    cout << "\n6. РАДИУСЫ ОКРУЖНОСТЕЙ" << endl;
    cout << "Радиус вписанной окружности (r) = " << r << endl;
    cout << "Радиус описанной окружности (R) = " << R << endl;

    double L_vpis = 2.0 * M_PI * r;
    double S_vpis = M_PI * r * r;
    double L_opis = 2.0 * M_PI * R;
    double S_opis = M_PI * R * R;

    cout << "\n7. ДЛИНЫ И ПЛОЩАДИ ОКРУЖНОСТЕЙ" << endl;
    cout << "Вписанная окружность: Длина = " << L_vpis << ", Площадь = " << S_vpis << endl;
    cout << "Описанная окружность: Длина = " << L_opis << ", Площадь = " << S_opis << endl;

    return 0;
}

