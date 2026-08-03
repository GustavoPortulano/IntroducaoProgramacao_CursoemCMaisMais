//02 de agosto de 2026. Domingo. Noite fria.
//Página 22 - Fluxo de entrada.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    double numero1;
    double numero2;
    double soma;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;
    soma = numero1 + numero2;
    cout << "A soma dos números é " << soma << endl;
    return 0;
}
