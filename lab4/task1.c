#include <stdio.h>

int main()
{
    int arr[7] = {4, 2, -3, 8, 12, 1, -2};
    int negative, sum, sq_el;

    for (int i; i < 7; i++)
    {
        if (arr[i] < 0)
        {
            sq_el = arr[i] * arr[i];
            sum += sq_el;
        }
    }
    printf("The sum and swuare of a negative element in array: %d\n", sum);

    return 0;
}