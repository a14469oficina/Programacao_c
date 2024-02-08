#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>      //printf, scanf, puts, NULL

using namespace std;


void soma() {
    int num1, num2;
    cout << "soma de 2 numeros inteiros \n";
    cout << "digite o 1 num \n";
    cin >> num1;
    cout << "digite o 2 num \n";
    cin >> num2;

    cout << "SOMA = " << (num1 + num2) << endl << endl;

}

void subtrair() {
    int num1, num2;
    cout << "subtracao de 2 numeros inteiros \n";
    cout << "digite o 1 num \n";
    cin >> num1;
    cout << "digite o 2 num \n";
    cin >> num2;

    cout << "subtracao = " << (num1 - num2) << endl << endl;

}
double dividir() {
    int num1, num2;
    cout << "divisao de 2 numeros inteiros \n";
    cout << "digite o 1 num \n";
    cin >> num1;
    cout << "digite o 2 num \n";
    cin >> num2;

    cout << "divisao = " << ((double)num1 / (double) num2) << endl << endl;

}
double multiplicar(int x, int y) {
    return (double)x * (double)y;

}




int main () {
    int op = '0';
    int resultado;
    int num1, num2;


    do{
        printf ("Qual a operacao que deseja efetuar? \n");
        printf ("1 - Somar \n");
        printf ("2 - Subtrair \n");
        printf ("3 - Multiplicar \n");
        printf ("4 - Dividir \n");
        printf ("0 - Fechar app \n");
        scanf ("%d", &op);

        switch (op) {
            case 1:
                soma();
                break;
            case 2:
                subtrair();
                break;
            case 3:
                    cout << "multiplicacao de 2 numeros inteiros \n";
                    cout << "digite o 1 num \n";
                    cin >> num1;
                    cout << "digite o 2 num \n";
                    cin >> num2;
                    resultado = multiplicar (num1,num2);
                    cout << "\n Resultado = " <<  resultado << endl << endl;
                break;
            case 4:
                dividir();
                break;
        }




    }while (op != '0');


    return 0;
}
