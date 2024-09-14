#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num);
int max(int num1, int num2);
int maxThree(int num1, int num2, int num3);

int main()
{
    printf("Hello world!\n");

    char charName[] = "Petro";
    int charAge = 18;
    printf("Man name %s\n", charName);
    printf("he was %d years old.\n", charAge);

    charAge = 16;
    printf("Man like name %s\n", charName);
    printf("he was %d years old.\n", charAge);

    printf("fisting is %d bucks \n", 300);
    int priceFisting = 300;
    printf("fisting is %d bucks \n", priceFisting);

    printf("%f\n", pow(2, 3) );
    printf("%f\n", sqrt(36) );

    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf ("You %d years old \n", age);

    printf ("Answer: %f", cube(3.0));

    printf("%d\n", max(4, 10));

    printf("%d\n", maxThree(4, 1, 8));

    // char grade;

    // printf("Enter your grade (A, B, C): ");
    // scanf(" %c", &grade); 

    // switch (grade)
    // {
    //     case 'A':
    //     printf("You did great!\n");
    //     break;

    //     case 'B':
    //     printf("You did alright!\n");
    //     break;

    //     case 'C':
    //     printf("You are gay!\n");
    //     break;

    //     default:
    //     printf("Invalid Grade\n");

    // }
     
    int i = 1;
    while(i <= 5)
    {
        printf("%d\n", i);
        i++;
    }

    int e;
    for(e = 1; i <=5; e++)
    {
        printf("%d\n", i);
    }

    printf("%d\n", i);

    printf("memory adress: %p\n", &i);
    




    return 0;
}//end int main

    double cube(double num) 
    {
        double result = num * num * num;
        return result;

    }

int max(int num1, int num2)
{
    int result;
    if(num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

int maxThree(int num1, int num2, int num3)
{
    int result;

    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        result = num2;
    }
    else 
    {
        result = num3;
    }
}