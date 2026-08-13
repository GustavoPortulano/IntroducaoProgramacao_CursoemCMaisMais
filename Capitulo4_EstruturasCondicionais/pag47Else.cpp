// 12 de agosto de 2026. Quarta-feria. Noite fria.
// 4.2 - Condicional 'Se-sen√£o' (else).
// Assume a mesma fun√ß√£o de ELIF do Python.

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero;
    cout << "\nDigite um n˙mero: ";
    cin >> numero;
    if (numero % 2 == 0){
        cout << "O n˙mero È par.\n" << endl;
    } else {
        cout << "O n˙mero È Ìmpar.\n" << endl;
    }

    return 0;
}