#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1 = 5, a2 = 13, b1, b2, b3;
    float f1 = 4.5, f2 = 1.8, r1, r2; // ініціалізація змінних
    
    a2 -= a1 + 5; // a2 = a2 - (a1 + 5)
    b1 = a1 + a2; // b1 = a1 + a2
    b2 = a1 > a2; // b2 = a1 > a2
    b3 = b2++; // b3 = b2, потім b2 збільшується на 1
    r1 = f1 + f2 / 2; // r1 = f1 + f2 / 2
    r2 = (f1 > f2) ? f1 + 1.2 : f2 - 1.4; // якщо f1 більше f2, тоді r2 = f1 + 1.2, інакше r2 = f2 - 1.4

    // Виведення результатів
    printf("a2 -= a1 + 5 -> a2 = %d\n", a2);
    printf("b1 = a1 + a2 -> b1 = %d\n", b1);
    printf("b2 = a1 > a2 -> b2 = %d\n", b2); 
    printf("b3 = b2++ -> b3 = %d\n", b3); 
    printf("r1 = f1 + f2 / 2 -> r1 = %.1f\n", r1);
    printf("r2 = (f1 > f2) ? f1 + 1.2 : f2 - 1.4 -> r2 = %.1f\n", r2);

    system("pause");
    return 0;
}
