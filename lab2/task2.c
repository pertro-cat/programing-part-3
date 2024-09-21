#include <stdio.h>

int main ()
{
    int n;
    puts("Input number: ");
    scanf("%d", &n);
    
    if (n > 0)
    {
        if (n % 5 == 0)
        {
            printf("Number %d is divisible by 5\n", n);
        }
        else 
        {
            printf("Number %d is not divisible by 5\n", n);
        }
    }
    else if (n < -100)
    {
        printf("Number %d < -100 \n", n);
    }
    else 
    {
        printf("Number %d > -100", n);
    }
    
    // Використовуємо getchar() для паузи, в Linux
    printf("Press Enter to continue...");
    getchar();  
    getchar();  
    
    return 0;
}