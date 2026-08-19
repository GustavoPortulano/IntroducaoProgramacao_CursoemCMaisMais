// 17 de agosto de 2026. Segunda-feria. Inicio de noite fria.
// Exercicio 4.5 - Faça um programa que leia
/*  # O salário de um empregado por hora trabalhada
    # O número de horas trabalhadas 
    # O número de dependentes
O programa retornará o salário final do empregado, sendo que:
    # Há um benefício de R$128,00 por dependente;
    # Deve-se pagar imposto de renda de acordo com o salário,
    # Há um benefício de acordo com o salário após o imposto de renda.
    O imposto de renda é:
    ---------------------------------------
    Salário                       Imposto
    Até R$1434,00               ----- 0,00%
    De R$1434,00 até R$2105,00  ----- 7,50%
    De R$2150,01 até R$2866,70 ----- 15,00%
    De R$2866,71 até R$3582,00 ----- 22,50%
        Acima de R$3582,01     ----- 27,50%
    ----------------------------------------

    Os benefícios são:
    ----------------------------------------
    Salário Líquido              Benefício
    Até R$500,00                 R$180,00
    De R$500,00 até R$1000,00    R$120,00
    Acima de R$1000,00           R$100,00
    ----------------------------------------
*/

#include<iostream>
#include<locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float hora_trabalhada;
    float nr_horastrabalhadas;
    float hora_extra;
    float nr_horasextras;
    float nr_dependentes;
    float salario_bruto;
    float imposto;
    float taxa;

    taxa = 0;
    salario_bruto = 0;
    imposto = 0;
    hora_extra = 10.7;

    cout << "Digite o salário do empregado por hora trabalhada: " << endl;
    cin >> hora_trabalhada;
    cout << "Digite o número de horas trabalhadas: " << endl;
    cin >> nr_horastrabalhadas;
    cout << "Digite o número de horas extras trabalhadas: " << endl;
    cin >> nr_horasextras;
    cout << "Digite o número de dependentes: " << endl;
    cin >> nr_dependentes;

    salario_bruto = (hora_trabalhada*nr_horastrabalhadas) +  
                    (hora_extra*nr_horasextras) + 
                    (nr_dependentes * 128);
    
    if (salario_bruto <= 500){
        salario_bruto += 180;
        cout << "O salário final do empregado é R$ " << salario_bruto << endl;
    } else if ((salario_bruto > 500) and (salario_bruto <= 1000)){
        salario_bruto += 120;
        cout << "O salário final do empregado é R$ " << salario_bruto << endl;
    } else if ((salario_bruto > 1000) and (salario_bruto <= 1434.59)){
        salario_bruto += 100;
        cout << "O salário final do empregado é R$ " << salario_bruto << endl;
    } else if ((salario_bruto > 1434.60) and (salario_bruto <= 2150.00)){
        salario_bruto += 100;
        taxa = 7.5;
        imposto = salario_bruto*(taxa/100);
        cout << salario_bruto << endl;
        cout << "Imposto descontado: R$ " << imposto << endl;
        salario_bruto -= imposto;
        cout << "O salário final TOTAL do empregado é R$ " << salario_bruto << endl;
    } else if ((salario_bruto > 2150.01) and (salario_bruto <= 2866.70)){
        salario_bruto += 100;
        taxa = 15;
        imposto = salario_bruto*(taxa/100);
        salario_bruto -= imposto;
        cout << "O salário final do empregado é R$ " << salario_bruto << endl;
    } else if ((salario_bruto > 2866.71) and (salario_bruto <= 3582)){
        salario_bruto += 100;
        taxa = 22.5;
        imposto = salario_bruto*(taxa/100);
        salario_bruto -= imposto;
        cout << "O salário final do empregado é R$ " << salario_bruto << endl;
    } else if (salario_bruto > 3582.01){
        salario_bruto += 100;
        taxa = 27.5;
        imposto = salario_bruto*(taxa/100);
        salario_bruto -= imposto;
        cout << "\nO salário final do empregado é R$ " << salario_bruto << endl;
    };
    cout << "\n" << endl;
    return 0;
}