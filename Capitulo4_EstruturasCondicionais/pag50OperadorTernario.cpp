// 13 de agosto de 2026. Quinta-feira. Tarde quente.
// Página 50 - Operador ternário.

#include<iostream>
#include<locale>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    cout << "\n" << endl;
    int x = 15;
    int y = 10;

    cout << "x � maior que y?" << endl;
    
    (x > y)?cout << "'verdade'" << endl:
    cout << "'falso'" << endl;

    cout << "\n" << endl;
    return 0;
} 