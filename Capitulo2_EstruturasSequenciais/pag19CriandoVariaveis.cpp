//02 de agosto de 2026. Domingo. Tarde fria
//2.4 - Criando varáveis

#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    //criando uma variável do tipo inteira com nome x
    int numero;
    //criando uma variável do tipo char com o nome letra
    char letra;
    //criando uma variável do tipo double com nome num_real
    double num_real;
    //criando uma variável do tipo boll com nome teste
    bool teste;
    cout << "Este programa criou 4 variáveis";

    return 0;
}