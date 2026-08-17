// 14 de agosto de 2026. Sexta-feira. Noite fria.
// Exercicio 4.3 - Faça um programa que leia um valor para uma variável x e enão
// calcule f(x), sendo que:
// f(x) = x + 2x² se g(x) > 10
// f(x) = 10 se g(x) <= 10
// g(x) = 5 se h(x) <= 5
// g(x) = h(x) se h(x) > 5
// h(x) = x² + 3x - 20 

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int x;
    int g = 0;

    cout << "Digite um valor para g(x): " << endl;
    cin >> x;
    

    if (x > 10){
        g = x + 2*x*x;
        cout << "Valor da função f(x): " << g;
    } else if ((x <= 10) and (x > 5)){
        g = 10;
        cout << "Valor da função f(x): " << g;
    } else if (x <=5){
         g = 5;
         cout << "Valor da função f(x): " << g;
    }
    return 0;
}