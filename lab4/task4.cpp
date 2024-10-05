#include <iostream>
#include <time.h>       
#include <stdlib.h>    
using namespace std;

int main() 
{
    const int N = 25;
    int a[N], i, j, temp;
    srand((unsigned)time(NULL)); 

    for (i = 0; i < N; i++) 
    {
        a[i] = rand() % 101 - 50;
        cout << "a[" << i << "]=" << a[i] << endl;
    }

    for (i = 0; i < N - 1; i++) 
    {
        for (j = i + 1; j < N; j++) 
        {  
            if (a[i] < a[j]) 
            {  
                temp = a[i];
                a[i] = a[j];  
                a[j] = temp;
            }
        }
    }

    cout << "Sorted array in descending order: "<< endl;
    for (i = 0; i < N; i++) 
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}
