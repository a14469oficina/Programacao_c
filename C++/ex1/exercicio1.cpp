#include <iostream>

using namespace std;
/** funcção de inicialização do programa **/
int main() {

    const double pi = 3.1416;
    int numero;
    string nome, sobrenome, resposta;

    nome = sobrenome = "Filipe";
    sobrenome = "Soblirov";

    cout << "_______________";
    cout << "\n \t Bom dia, " << nome << " " << sobrenome;
    cout << "\n \n \t Vamos criar o quadrado de um numero ?\n";
    cout << "Escreva o numero: " << endl;

    cin >> numero;

    //system("cls"); //limpar tela
    if (numero > 0) {
    cout << "0 " << numero << " ao quadrado = " << (numero * numero) << endl;
    } else if (numero == 0) {
        cout << "0 x 0 = 0 ganda nabo que es";
    }else {
        cout << "apenas aceitamos numeros positivos";
    }
    return 0;

}

