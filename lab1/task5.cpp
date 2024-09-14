#include <iostream>
using namespace std;

int main()
{
    cout<<"hello world"<<endl;

    int x1 = 2147483645;          // максимальне значення для int = 2147483647
    unsigned int y1 = 4294967290; // максимальне значення для unsigned int = 4294967295
    char z1 = 125;                // максимальне значення для char = 127
    unsigned char v1 = 252;       // максимальне значення для unsigned char = 255

    int x2 = x1 + 2;
    int x3 = x1 + 3;

    unsigned int y2 = y1 + 5;
    unsigned int y3 = y1 + 6;

    char z2 = z1 + 2;         
    char z3 = z1 + 3;         

    unsigned char v2 = v1 + 3; 
    unsigned char v3 = v1 + 4;

    printf("int value: x1 = %d, x2 = %d, x3 = %d\n", x1, x2, x3);
    printf("unsigned int value: y1 = %u, y2 = %u, y3 = %u\n", y1, y2, y3);
    printf("char value: z1 = %d, z2 = %d, z3 = %d\n", z1, z2, z3);
    printf("unsigned char value: v1 = %u, v2 = %u, v3 = %u\n", v1, v2, v3);

   


    return 0;
}
