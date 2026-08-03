//02 de agosto de 2026. Domingo. Noite fria.
//Página 25 - Operadores aritméticos.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero1;
    int numero2;
    int r;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;
    r = numero1 + numero2;
    cout << "Adição dos números = " << r << endl;

    r = numero1 - numero2;
    cout << "Subtração de números = " << r << endl;
    r = numero1 * numero2;
    cout << "Multiplicação dos números = " << r << endl;
    r = numero1/numero2;
    cout << "Divisão dos números = " << r << endl;
    r = numero1 % numero2;
    cout << "Resto da divisão = " << r << endl;
    return 0;
}