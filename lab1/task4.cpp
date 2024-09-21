#include <iostream>

using namespace std;

int main() {
    double r, S;
    
    cout << "Input the radius in sentimeter: " << endl;
    cin >> r;
    
    S = 3.14159 * (r * r);
    
    cout << "Area of circle is: " << S << endl;
    
    return 0;
}
