// 10 de agosto de 2026. Segunda-feira. Noite normal.
// Exerc√≠cio 3.4 - Fa√ßa um programa que leia dois valores a e b e imprima o resultado de
//(b≥ + ab) - 2b + a mod b.*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a;
    int b;
    int r;  //resultado

    cout << "Digite um n˙mero inteiro 'a':" << endl;
    cin >> a;
    cout << "Digite um n˙mero inteiro 'b':" << endl;
    cin >> b;

    r = (b*b*b + a*b) - 2*b + a%b;

    cout << "O resultado da funÁ„o È " << r << endl;

    return 0;
}