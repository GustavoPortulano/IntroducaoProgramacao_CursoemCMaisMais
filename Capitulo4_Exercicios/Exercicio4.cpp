// 17 de agosto de 2026. Segunda-feira. Fim de tarde fria.
/* Exercí­cio 4.4 - Faça um programa que leia a idade de um atleta e imprima s
sua categoria, sendo que
idade do atleta ----- Categoria
5 a 7 anos ---------- Infantil A
08 a 10 anos --------- Infantil B
11 a 13 anos --------- Juvenil A
14 a 17 anos --------- Juvenil B
18 a 25 anos --------- SÃªnior*/

#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    setlocale (LC_ALL, "Portuguese_Brazil");

    int idade;

    cout << "Digite a idade do atleta: " << endl;
    cin >> idade;

    if ((idade >= 5) and (idade <= 7)){
        cout << "Este é um atleta Infantil A" << endl;
    } else if ((idade >= 8) and (idade <=10)){
        cout << "Este é um atleta Infantil B" << endl;
    } else if ((idade >= 11) and ( idade <= 13)){
        cout << "Este é um atleta Juvenil A" << endl;
    } else if ((idade >= 17) and (idade <= 17)){
        cout << "Este é um atleta Juvenil B" << endl;
    } else if ((idade >= 18) and (idade <= 25)){
        cout << "Este é um atleta Sênior" << endl;
    }

    return 0;
}