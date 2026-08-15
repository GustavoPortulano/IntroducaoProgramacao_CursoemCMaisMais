// 13 de agosto de 2026. Quinta-feira. Tarde quente.
/*Exercício 4.2 = Faça um programa que leia 5 nÃºmeros e diga no final quantos
números eram pares e quantos numeros eram pares. Neste exercício, apenas duas 
variáveiss poderão ser utilizadas. uma para receber o número e a outra para
contar quantas vezes o número recebido foi par ou ímpar.*/

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int nr;
    // Variável xr inicializada em 0.
    int xr = 0;

    // Como não foram usados laços, cada númemro digitado recebeu uma condicional
    // if, sendo que o contador foi somado apenas quando o número digitado fosse par.
    // Para encontrar a quantidade de números ímpares, foi subtraída a quantiade de
    // números pares de 5.
  
    cout << "Digite o primeiro númmero: " << endl;
    cin >> nr;
    if (nr % 2 == 0){
        xr += 1;
    }
    cout << "\nDigite o segundo númmero: " << endl;
    cin >> nr;
    if (nr % 2 == 0){
        xr += 1;
    }
    cout << "\nDigite o terceiro númmero: " << endl;
    cin >> nr;
    if (nr % 2 == 0){
        xr += 1;
    }
    cout << "\nDigite o quarto númmero: " << endl;
    cin >> nr;
    if (nr % 2 == 0){
        xr += 1;
    }
    cout << "\nDigite o quinto númmero: " << endl;
    cin >> nr;
    if (nr % 2 == 0){
        xr += 1;
    }
    cout << "Foram digitados " << xr << " números pares e "  << 5 - xr << " números ímpares." << endl;

    return 0;
}