#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int posicao = 0;
string pilha[6];

void push(){
    if (posicao<6) {
        cout << "insira um numero ";
        cin >> pilha[posicao];
        posicao++;
    } else {
        cout << "Nao tem posicoes livres na pilha ,";
        cout << " tem que retirar algum numero" << endl;
    }
}

void pop(){
    if (posicao>0) {
        cout << "retirou o elemento : ";
        cout << pilha[posicao-1] << endl << endl;
        posicao--;
    }else{
        cout << "\n nao tem elementos na pilha \n";
    }
}
void top(){
    if (posicao > 0){
        cout << "Top = " << pilha[posicao-1] << endl;
    }else{
        cout << "\n nao tem elementos na pilha \n";
    }
}

void mostrarpilha() {
    for (int i = 0; i<posicao; i++){
        cout << "Pilha [" << i << "] = " << pilha [i] << endl;
    }

}

int main() {

    int op , continua = true;
    int posicao = 6;
    int numero = 0;
    string pilha[posicao];

    do{
        printf ("Qual a operacao que deseja efetuar? \n");
        printf ("1 - adicionar um numero para a pilha \n");
        printf ("2 - tirar um numero da pilha  \n");
        printf ("3 - fazer um top \n");
        printf ("4 - mostrar a pilha inteira \n");
        scanf ("%d", &op);

        switch (op) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                top();
                break;
            case 4:
                mostrarpilha();
                break;
                default:
                    continua = false;
                    break;
    }


    }
    while
       (continua);


    return 0;

}
