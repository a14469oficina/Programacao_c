#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>      //printf, scanf, puts, NULL

using namespace std;

void naodevolvendada(){

}

int devolveinteiro(){

}

int devolveinteiro_recebeinteiro(int x){
    return x*x;
}

int factorial(int numero){
    if (numero>=2){
        return numero * factorial(numero - 1);
    }else{
        return 1;
    }

}


int potencia(int base,int expoente){
    if (expoente > 1){
        return base * potencia (base, expoente - 1);
    }else if (expoente== 0){
        return 0;
    }else{
        return base;
    }

}


//inverter array !!!!!

int * inverterarray (int omeuarray[], int inicio, int fim){
    int aux;
    if (inicio < fim){
        aux = omeuarray[inicio];
        omeuarray[inicio] = omeuarray[fim];
        omeuarray[fim] = aux;
        inverterarray(omeuarray, (inicio+1) , (fim-1));
    }
}




int main () {

    int aux;
    int arrayNum,inicio,fim;

    aux = arrayNum[0];
    arrayNum[0]= arrayNum[9];

    inverterarray(arrayNum, inicio , fim);
    //cout << potencia (4, 4);

    /*
    cout << devolveinteiro_recebeinteiro(2) << endl;
    cout << devolveinteiro_recebeinteiro(3) << endl;
    cout << devolveinteiro_recebeinteiro(4) << endl;
    cout << devolveinteiro_recebeinteiro(5) << endl;
    */
    return 0;
}
