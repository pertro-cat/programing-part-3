#include <stdio.h>

int main()
{
    double a, b, c, d;
    puts("Enter four real numbers:");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d); 

    double max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d; 
    }

    if (max > 500)
    {
        printf("max = %.2lf > 500\n", max); 
    }
    else
    {
        printf("max = %.2lf < 500\n", max); 
    }

    return 0;
}
