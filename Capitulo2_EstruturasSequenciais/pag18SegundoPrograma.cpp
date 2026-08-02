//02 de agosto de 2026. Domingo. Tarde fria.
//2.2 - Segundo programa em C++ e espaço de nomes padrão

#include <iostream>
#include <locale.h> //Biblioteca que permite inserir acentuação gráfica

using namespace std;


int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");  //Permite a acentuação gráfica
    
    cout << "Ol�, Mundo!" << endl;
    
    return 0;

}