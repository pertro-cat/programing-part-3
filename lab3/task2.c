#include <stdio.h>

int main()
{
    int num, sum = 0, countOfNum = 0;

    while (1) 
    {
        printf("Enter a number (enter 13 to stop): ");
        scanf("%d", &num);

        if (num == 13) 
        {
            break;
        }

        if (num < 0 && num % 2 != 0) 
        {
            sum += num; 
            countOfNum++; 
        }
    }

    printf("The sum of negative odd numbers is: %d\n", sum);
    printf("The count of negative odd numbers is: %d\n", countOfNum);

    return 0;
}
