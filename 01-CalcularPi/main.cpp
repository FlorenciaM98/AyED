#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;



int main() {
    float c = 0;
    int i;

    for (i = 0; i <= 1000000; i++){
        c = (pow((-1), i) / ((2 * i) + 1)) + c;
    }

    cout.precision(7);

    cout << (c*4) << endl;
}