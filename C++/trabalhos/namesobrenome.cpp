#include <iostream>

using namespace std;
/** funcção de inicialização do programa **/
int main() {

    string nome,sobrenome;
    string nomecompleto;

    cout << "Qual o seu nome? \n";
    cin >> nome;
    cout << "Qual o seu sobrenome? \n";
    cin >> sobrenome;

    nomecompleto = nome;
    nomecompleto += " ";
    nomecompleto += sobrenome;


    cout << "Bom dia caro ";
    cout << nome[0] << "." << sobrenome;

    cout << "\ncom o teu sobrenome " << sobrenome << ",temos o " << sobrenome [0];
    cout << "\ncom o teu nome " << nome << ",temos o " << nome [0];
    cout << "\nassim sera chamado de " << nome [0] << sobrenome [0];
    return 0;

}
