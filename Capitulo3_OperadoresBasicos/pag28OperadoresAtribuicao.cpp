//03 de agosto de 2026. Segunda-feira. inicio de madrugada fria.
// Página 27. Operadores de atribuição aritméticos.

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int numero1;
    int numero2;

    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número: ";
    cin >> numero2;
    
    numero1 += numero2;
    cout << "Somando ";
    cout << numero2 << " -> " << numero1 << endl;
    
    numero1 -= numero2;
    cout << "Subtraindo ";
    cout << numero2 << "-> " << numero1 << endl;
    
    numero1 *= numero2;
    cout << "Multiplicando por ";
    cout << numero2 << "-> "  << numero1 << endl;
    
    numero1 /= numero2;
    cout << "Dividindo por ";
    cout << numero2 << "-> " << numero1 << endl;
    
    numero1 %= numero2;
    cout << "Resto da divisão por ";
    cout << numero2 << " -> " << numero1 << endl;

    return 0;
}