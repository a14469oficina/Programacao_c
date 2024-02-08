#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>

using namespace std;

struct Carros{
        string marca;
        string modelo;
        string versao;
        string matricula;
        int ano;
        string proprietario;
    };

    float mediaAno, mediaIdade;
    int AnoAtual = 2024;

int main(){

    int aux;
    float auxresto;
    float diasrestantes;

    Carros carro1;
    carro1.marca = "Volkswagen";
    carro1.modelo = "Sharan";
    carro1.versao = "7M8";
    carro1.matricula = "24-JP-20";
    carro1.ano = 2020;
    carro1.proprietario = "Alexandre Soblirov";

    Carros carro2;
    carro2.marca = "Rollce Royce";
    carro2.modelo = "Phantom";
    carro2.versao = "6O4";
    carro2.matricula = "99-FF-99";
    carro2.ano = 2022;
    carro2.proprietario = "Cristiano Ronaldo";

    Carros carro3;
    carro3.marca = "Nissan";
    carro3.modelo = "GTR";
    carro3.versao = "R-35";
    carro3.matricula = "54-HY-30";
    carro3.ano = 2018;
    carro3.proprietario = "Shunji Tanaka";

    Carros carro4;
    carro4.marca = "Subaru";
    carro4.modelo = "Impreza";
    carro4.versao = "22B";
    carro4.matricula = "313.DF.2";
    carro4.ano = 2015;
    carro4.proprietario = "Filipe Soblirov";

    float mediaAno = float (carro1.ano + carro2.ano + carro3.ano + carro4.ano) / 4;
    float mediaIdade = float((AnoAtual - carro1.ano) + (AnoAtual - carro2.ano) + (AnoAtual - carro3.ano) + (AnoAtual - carro4.ano)) / 4;

    cout << mediaAno << endl;
    cout << mediaIdade << endl;

    aux = AnoAtual - mediaAno;
    cout << aux << endl;
    auxresto = (mediaIdade - aux);
    cout << auxresto << endl;

    diasrestantes = (auxresto * 365);

    cout << diasrestantes;




return 0;

}
