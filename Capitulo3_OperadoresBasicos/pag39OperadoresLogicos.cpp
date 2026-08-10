// 10 de agosto de 2026. Segunda-feria. Início de noite.
// Página 39 - Operadores lógicos.

#include <iostream>

using namespace std;

int main(){
    bool x;
    x = ((2 > 7) && (6 > 3));
    cout << x << endl;
    x = ((true) || (false));
    cout  << x << endl;
    cout << ((2 < 7) && (6 > 3)) << endl;
    cout << ((2 < 7) || (6 < 3)) << endl;
    cout << ((7 < 2) || (6 < 3)) << endl;
    x = !x;
    cout << x << endl;
    cout << !(2 < 3) << endl;

    return 0;
}