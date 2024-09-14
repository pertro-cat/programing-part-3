#include <stdio.h>
#include <stdlib.h>

int main() {
    puts("My first program"); // виведення повідомлення

    char s = 'p'; // визначення символу
    printf("Symbol %c = (%d)10S = (%#o) 8S = (%#x)16S size char = %zu bait\n", s, s, s, s, sizeof(s));

    int a = 78; // визначення цілої змінної
    printf("a = %d size int = %zu bait\n", a, sizeof(a));

    float b = 56.23; // визначення дійсної змінної
    printf("b = %f = %e size float = %zu bait\n", b, b, sizeof(b));

    printf("Fedyk\n"); // виведення прізвища
    //нові змінні
    short sh = 10;
    long l = 123456789L;
    double pi = 3.14159;
    //виведення змінних та розмірів в байтах
    printf("sh = %d size short = %zu bait\n", sh, sizeof(sh));
    printf("l = %ld size long = %zu bait\n", l, sizeof(l));
    printf("d = %f size double = %zu bait\n", pi, sizeof(pi));


    //puts("\nPress any key and Enter...\n");
    //getchar();

    return 0;
}
