#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 3.1415;
    double x, arctan, arcctg;
    double values[] = {1 * pi, 5 * pi, 10 * pi, 20 * pi};
    for (int i = 0; i < 3; i++)
    {
        x = values[i];
        arctan = atan(x);
        arcctg = atan(1 / x);

        printf("arctan(x) = %5f\n", arctan);
        printf("arcctg(x) = %5f\n", arcctg);
    }

    return 0;
}