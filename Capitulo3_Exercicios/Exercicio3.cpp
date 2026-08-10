// 10 de agosto de 2026. Noite normal e fresca.
/* Exerc√≠cio 3.3 - Fa√ßa um programa que leia o raio r de um c√≠rculo e imprima
sua √°rea e seu per√≠metro.
A = 3.14 * r*r
P = 2*3.14 * r*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float r;    // raio
    float a;    // area
    float p;    //perÌmetro

    cout << "Digite o raio do cÌrculo: " << endl;
    cin >> r;

    a = 3.14*r*r;
    p = 2*3.14*r;

    cout << "Raio do cÌculo: " << r << endl;
    cout << "¡rea do cÌrculo: " << a << endl;
    cout << "PerÌmetro do cÌrculo: " << p << endl;
    
    return 0;
}