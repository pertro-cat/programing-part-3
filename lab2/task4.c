#include <stdio.h>

int main()
{
    int x;
    puts("Enter a month number: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
    case 2:
    case 3:
        printf("first quarter\n");
        break;

    case 4:
    case 5:
    case 6:
        printf("second quarter\n");
        break;

    case 7:
    case 8:
    case 9:
        printf("third quarter\n");
        break;

    case 10:
    case 11:
    case 12:
        printf("fouth quarter\n");
        break;

    default:
        printf("Please enter correct number of month\n");
    }

    printf("Press Enter to continue...");
    getchar();
    getchar();

    return 0;
}
