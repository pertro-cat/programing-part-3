#include <stdio.h>

int main()
{
    int num, cycle = 0, count = 0, a;
    int sum = 0, neg_sum = 0;
    
    puts("Enter numbers: ");
    
    while (cycle < 15)
    {
        scanf("%d", &a);
        
        // Якщо введене число -100, цикл переривається
        if (a == -100)
        {
            break;
        }
        
        // Додаємо введене число до загальної суми
        sum += a;
        cycle++;

        // Якщо число від'ємне, додаємо до суми від'ємних чисел і рахуємо їх кількість
        if (a < 0)
        {
            neg_sum += a;
            count++;
        }
    }

    // Виводимо результати
    printf("Total sum of all numbers: %d\n", sum);
    printf("Sum of negative numbers: %d\n", neg_sum);
    printf("Count of negative numbers: %d\n", count);
    
    return 0;
}
