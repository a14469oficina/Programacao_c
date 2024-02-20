#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

const int numAutocarros = 26;

int res = 0;

struct bus{
    string linha;
    string trajeto;
    string horas;
    int capacidade;
    string condutor;
};

void painelinicial(){


};
void pedirelemento(bus autocarros[numAutocarros], int numAutocarro) {


    fflush(stdin);
    cout << "qual a linha do autocarro? ";
    getline(cin,autocarros[numAutocarro].linha);

    fflush(stdin);
    cout << "qual o trajeto do autocarro? ";
    getline(cin,autocarros[numAutocarro].trajeto);

    fflush(stdin);
    cout << "a que horas o autocarro chega? ";
    getline(cin,autocarros[numAutocarro].horas);

    fflush(stdin);
    cout << "qual a capacidade do autocarro? ";
    cin >> autocarros[numAutocarro].capacidade;

    fflush(stdin);
    cout << "qual e o condutor do autocarro? ";
    getline(cin,autocarros[numAutocarro].condutor);

    res += autocarros[numAutocarro].capacidade;
};



int main(){

    bus autocarros [numAutocarros];
    int autocarroInicial = 0;
    string op = "";


    painelinicial();

    do{
    //pedir ao utilizador se vai colocar autocarros
    //ou se terminou de inserir !!
    //ao inserir vai pedir os elementos
    //para inserir nos 5 atributos de cada BUS
     printf ("Qual a operacao que deseja efetuar? \n");
        printf ("0 - sair do programa  \n");
        printf ("1 - adicionar um autocarro \n");
        printf ("2 - ver a capacidade total de lugares dos autocarros todos");
        cin >> op;

        if (op == "1"){
               pedirelemento(autocarros, autocarroInicial);
               autocarroInicial++;
        }
        if (op == "2"){

        }
        op = "";
    }while (autocarroInicial < numAutocarros && op != "0");



return 0;

}

