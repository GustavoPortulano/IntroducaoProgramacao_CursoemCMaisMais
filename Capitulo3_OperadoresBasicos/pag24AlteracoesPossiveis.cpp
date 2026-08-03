//02 de agosto de 2026
//Página 24 - Alterações possíveis

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    double numero1, numero2;
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;
    cout << "A soma dos números é ";
    cout << numero1 + numero2 << endl;
    return 0;
}