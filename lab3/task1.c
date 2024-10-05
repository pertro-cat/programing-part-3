#include <stdio.h>

int main ()
{
    int a = 5, sum = 0, n;
    
    puts("Enter the number of cycles: ");
    scanf("%d", &n);

    while (n > 0)
    {
        sum += a;
        a += 5;  
        n--;    
    }
    
    printf("Sum of multiples of 5 is: %d\n", sum);
    
    // Використовуємо getchar() для паузи, в Linux
    printf("Press Enter to continue...");
    getchar();  
    getchar();  
    
    return 0;
}
