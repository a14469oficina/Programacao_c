#include <iostream>

using namespace std;
/** funcção de inicialização do programa **/
int main() {

    int numeros, soma = 0;


    do{
        cout << "qual o numero que pretende somar se digitar 0 todos os numeros anteriores vao somar-se" << endl;
        cin >> numeros;
        soma = soma + numeros;

    }
    while (numeros != 0);

    cout << soma;

    return 0;

}
