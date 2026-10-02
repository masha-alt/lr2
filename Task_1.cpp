#include <iostream>

int main() {
    double x;
    std::cout << "Введите вещественное число x: ";
    if (!(std::cin >> x)) {
        std::cerr << "Ошибка ввода!" << std::endl;
        return 1;
    }

    // 1. x^2
    double x2 = x * x;              
    
    // 2. 23 * x^2
    double cx2 = 23.0 * x2;         
    
    // 3. 23 * x^2 + 32
    double bx = cx2 + 32.0;         
    
    // 4. B = 23 * x^3 + 32 * x 
    double B = x * bx;               
    
    // 5. 69 * x^2
    double triple_cx2 = 3.0 * cx2;  
    
    // 6. A = 69 * x^2 + 8
    double A = triple_cx2 + 8.0;     

    // 7. Первое выражение: A + B
    double res1 = A + B;          
    
    // 8. Второе выражение: A - B
    double res2 = A - B;            

    // Вывод результатов
    std::cout << "Результат 1 (23x^3 + 69x^2 + 32x + 8): " << res1 << std::endl;
    std::cout << "Результат 2 (-23x^3 + 69x^2 - 32x + 8): " << res2 << std::endl;

    return 0;
}


