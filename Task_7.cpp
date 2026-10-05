#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double a, b, c, Y;
    int N;

    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    cout << "Введите значение c: ";
    cin >> c;
    cout << "Введите целое число N: ";
    cin >> N;

    switch (N) {
        case 2:
            Y = b * c - pow(a, 2);
            break;
        case 56:
            Y = b * c;
            break;
        case 7:
            Y = pow(a, 3) + c;
            break;
        case 3:
            Y = a - b * c;
            break;
        default:
            Y = pow(a + b, 3);
            break;
    }

    cout << "Результат Y = " << Y << endl;

    return 0;
}

