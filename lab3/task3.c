#include <stdio.h>

int main()
{
    int F, a, b;
    for (a = 5; a <= 50; a += 5)
    {
        for(b = 4; b<=10; b+=2)
        {
            F = (5 * a) + (b * b);

            printf("a = %d, b = %d, F = %d\n", a, b, F);
        }


    }
    

    return 0;
}