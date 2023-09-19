#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;



int main() {
    float c = 0.0;
    int i = 0;
    float pi = 3.141592;

    while( abs(c) != (pi/4)) {

        c = (pow((-1), i) / ((2.0 * i) + 1)) + c;
        i++;
        cout << c << endl;

    }

    /* for (i = 0; i <= 1000000; i++){
        
    } */

    cout.precision(7);

    cout << (c*4) << endl;
    
}