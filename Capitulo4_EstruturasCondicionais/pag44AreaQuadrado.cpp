// 12 de agosto de 2026. Quarta-feria. Noite fria.
// 4.1 - Condicional 'if' (se).

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    double largura;
    cout << "\nCálculo da área de um quadrado." << endl;
    cout << "Digite a largura do quadrado: ";
    cin >> largura;

    if (largura >= 0){
        cout << "A área do quadrado é ";
        cout << largura * largura << endl;
        cout << "\n" << endl;
    }

    return 0;
}