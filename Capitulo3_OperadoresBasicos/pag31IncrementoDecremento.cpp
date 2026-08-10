// 08 de agosto de 2026. Domingo. Noite agradável
// 3.5 - Operadores de incremento e decremento.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int x;
    x = 0;

    cout << "x = " << x++ << endl;
    cout << "x = " << x << endl;
    cout << "x = " << ++x << endl;
    cout << "x = " << x << endl;
    cout << "x = " << x-- << endl;
    cout << "x = " << x << endl;
    cout << "x = " << --x << endl;
    cout << "x = " << x << endl;
    return 0;
}