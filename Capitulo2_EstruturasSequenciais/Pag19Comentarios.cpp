//02 de agosto de 2026. Domingo. Tarde fria
//2.4 - Comentários

#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");
    
    cout << "Olá, Mundo!" << endl;  //Tudo isto é igonorado
    // cout << "Olá, Mundo!" << endl;
    cout << "Olá mais uma vez" << endl;
    /*Agui se inicia um bloco de comentários.
    Tudo dentro do bloco é ignorado. */
    //cout << "Este "Olá , Mundo!" não será impresso!" endl;
    return 0;
}

