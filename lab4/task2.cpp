#include <iostream>
#include <time.h>       
#include <stdlib.h>     
using namespace std;

int main() {
    const int n = 14;
    int a[n], i, sum = 0, count = 0;
    
    srand((unsigned)time(NULL)); 
    

    for (i = 0; i < n; i++) {
        a[i] = rand() % 61 - 30;
        cout << "a[" << i << "]=" << a[i] << "\n";
    }
    for (i = 0; i < n; i++)
    {
        if(a[i] % 2 != 0)
        {
            sum += a[i];
            count++;
        }
    }
    cout << "Sum odd element of array: "<<sum<<endl;
    cout << "Count odd element in array: "<<count<<endl;

    

    return 0;
}

// Заповніть масив цілих чисел випадковими числами від -30 до 30
// та обчисліть кількість непарних чисел. Розмір масиву 14.
