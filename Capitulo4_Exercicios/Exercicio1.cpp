// 13 de agosto de 2026. Quinta-feria. Tarde quente.
/*FaÁa um programa que leia um n√∫mero de usu√°rio e uma senha num√©rica. o 
programa deve dizer se os valores digitados s√£o v√°lidos ou n√£o. As senhas s√£o:
Numero de usu√°rio ----- Senha
982783----------------- 83928
263572 ---------------- 49582
275493 ---------------- 72648*/

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
   
    float usuario;
    float senha;

    cout << "\nDigite o n˙mero de usu·rio: ";
    cin >> usuario;
    cout << "Digite o n˙mero da senha do usu·rio: ";
    cin >> senha;
    if (usuario == 982753 and senha == 83928){
        cout << "Usu·rio v·lido." << endl;
    } else if(usuario == 263572 and senha == 49582){
        cout << "Usu·rio v·lido" << endl;
    } else if(usuario == 275493 and senha == 72648){
        cout << "Usu·rio v·lido" << endl;
    } else {
        cout << "Usu·rio inv·lido" << endl;
    }
   return 0;
}