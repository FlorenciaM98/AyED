//TP1 individual de algoritmos, están las consignas en el aula virtual
//están todas las indicaciones en el mismo tp en el aula
//fecha limite 2 de junio como primera entrega, puedo entregar algo que se parece
//fecha limite de segunda entrega 23 de junio, esta entrega es para rehacer o terminar lo que entegué en la primera fecha

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