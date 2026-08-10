// 10 de agosto de 2026. Noite normal.
/* Fa√ßa um programa que leia uma tempertura em Celsius e impreme
esta temperatura em Fahrenjeit. Considere a f√≥rmula:
F = (9C/5) + 32*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float c;    //temperatura em Celsius
    float f;    //temperatura em fahrenheit

    cout << "Digite a temperatura em Celsius: " << endl;
    cin >> c;
    
    f = (9*c/5) + 32;

    cout << "A temperatura de " << c << "∫ C" << " equivale a " << f << "∫ F." << endl;

    return 0;
}