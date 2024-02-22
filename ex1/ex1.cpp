#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <conio.h>

using namespace std;

const int numAutocarros = 26;

string motorista;

string linha;

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
    string aux = "";
    bool linhaOK = true;

    do{
        linhaOK = true;
        fflush(stdin);
        cout << "qual a linha do autocarro? "<< endl;
        getline(cin,aux);

        for (int i=0; i<numAutocarro;i++){
            if (aux == autocarros[i].linha){
                linhaOK = false;
                cout << "a linha " << aux << " ja existe" << endl;
            }
        }
    }while (!linhaOK);
    autocarros[numAutocarro].linha = aux;


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

};


void capacidadetotal(bus autocarros[numAutocarros], int numAutocarro){
    int soma = 0;

    for (int z = 0; z < numAutocarro; ++z) {
        soma+=autocarros[z].capacidade;
    }
    cout << soma;
};

void motoristas(bus autocarros[numAutocarros], int numAutocarro){

    for (int z = 0; z < numAutocarro; ++z) {
    cout << (autocarros[z].condutor == "" ? " " : autocarros[z].condutor) << " \n";
    }

};

void linhas(bus autocarros[numAutocarros], int numAutocarro){

    for (int z = 0; z < numAutocarro; ++z) {
    cout << (autocarros[z].linha == "" ? " " : autocarros[z].linha) << " \n";
    cout << (autocarros[z].trajeto == "" ? " " : autocarros[z].trajeto) << " \n";
    }
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
        printf ("2 - ver a capacidade total de lugares dos autocarros todos \n");
        printf ("3 - ver todos os motoristas dos autocarros \n");
        printf ("4 - ver todas as linhas dos autocarros \n");
        cin >> op;

        if (op == "1"){
            pedirelemento(autocarros, autocarroInicial);
            autocarroInicial++;
        }
        if (op == "2"){
            capacidadetotal(autocarros,autocarroInicial);
        }
        if (op == "3"){
            motoristas(autocarros,autocarroInicial);
        }
        if (op == "4"){
            linhas(autocarros,autocarroInicial);
        }

        op = "";
    }while (autocarroInicial < numAutocarros && op != "0");



return 0;

}

