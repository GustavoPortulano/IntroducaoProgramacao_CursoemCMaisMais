// 12 de agosto de 2026. Quarta-feria. Noite fria.
// PÃ¡gina 43 - 4.3: Se-senão aninhados.' (else).

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");

    int nota;
    cout << "Digite a nota do aluno: ";
    cin >> nota;
    if (nota >= 90){
        cout << "O conceito do aluno é A." << endl;
    } else if (nota >= 80){
        cout << "O conceito do aluno é B." << endl;
    } else if (nota >= 70){
        cout << "O conceito do aluno è C." << endl;
    } else if (nota >= 60){
        cout << "O conceito do aluno é D." << endl;
    } else {
        cout << "O conceito do aluno é E." << endl;
    }
    return 0;
}