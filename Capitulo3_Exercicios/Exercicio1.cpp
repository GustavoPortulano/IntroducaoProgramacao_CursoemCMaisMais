// 10 de agosto de 2026. Segunda-feira. Início de noite.
/* Exercício 3.1: Faça um programa que leia uma altura e um peso de uma pessoa e
imprima seu ìndice de Massa Corporal (IMC), que é calculado com a fórmula:
IMC = peso/altura*altura. */

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    // N�o usar n�meros inteiros.

    float peso;
    float altura;
    float imc;

    cout << "Digite o pesso da pessoa: " << endl;
    cin >> peso;
    cout << "Digite a altura da pessoa: " << endl;
    cin >> altura;

    imc = peso/(altura*altura);

    cout << "O seu IMC � de: " << imc << endl;

    return 0;
}