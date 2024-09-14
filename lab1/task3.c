#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double x, z, h, res, res1, res2;
    
    puts("Input x, z, h");
    scanf("%lf %lf %lf", &x, &z, &h);
    
    // res1 = pow(x, 3);
    // res2 = pow(h, 2);

    // res = res1 + z / res2;

    res = x * x * x + z / (h * h);

    printf("res = %.3lf\n", res);
    
    system("pause");
    return 0;
}
