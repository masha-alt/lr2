#include <iostream>

using namespace std;

int main() {
    int h1, min1, h2, min2;
    
    while (true) {
        cout << "Введите время начала (часы и минуты через пробел): ";
        cin >> h1 >> min1;
        
        if (h1 >= 0 && h1 < 24 && min1 >= 0 && min1 < 60) {
            break; 
        }
        cout << "Ошибка! Часы должны быть от 0 до 23, а минуты от 0 до 59. Попробуйте снова.\n" << endl;
    }
    
    while (true) {
        cout << "Введите время окончания (часы и минуты через пробел): ";
        cin >> h2 >> min2;
        
        if (h2 >= 0 && h2 < 24 && min2 >= 0 && min2 < 60) {
            break; 
        }
        cout << "Ошибка! Часы должны быть от 0 до 23, а минуты от 0 до 59. Попробуйте снова.\n" << endl;
    }
    
    int start_minutes = h1 * 60 + min1;
    int end_minutes = h2 * 60 + min2;
    
    int duration_minutes;
    if (end_minutes >= start_minutes) {
        duration_minutes = end_minutes - start_minutes;
    } else {
        duration_minutes = (24 * 60 - start_minutes) + end_minutes;
    }
    
    int res_h = duration_minutes / 60;
    int res_min = duration_minutes % 60;
    
    cout << "\nСтудент решал задачи: " << res_h << " ч. " << res_min << " мин." << endl;
    
    return 0;
}
