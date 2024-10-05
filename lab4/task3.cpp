#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {201, 3, 2, -4, 6, 7, 110};
    int min, i;
    int *px = arr; 

    min = *px; 

    for (i = 0; i < 7; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "The min element of array is: " << min << endl;

    return 0;
}
