#include <stdio.h>

int main()
{
    char x;
    puts("Enter a char: ");
    scanf("%c", &x);

switch (x)
{
    case 'A': 
    case 'a':
        printf("apple\n"); // яблуня
        break;

    case 'B':
    case 'b':
        printf("basswood\n"); // липа
        break;

    case 'C':
    case 'c':
        printf("cherry\n"); //вишня
        break;

    case 'D':
    case 'd':
        printf("dog-rose\n"); //шипшина
        break;

    case 'E':
    case 'e':
        printf("elder\n"); //бузина
        break;

    case 'F':
    case 'f':
        printf("field maple\n"); // польовий клен
        break;

    default:
        printf("Sorry, this tree is not included in this list\n");
}


    printf("Press Enter to continue...");
    getchar(); 
    getchar(); 

    return 0;
}
