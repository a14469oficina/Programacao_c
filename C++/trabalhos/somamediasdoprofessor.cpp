#include <iostream>
#include <string>

using namespace std;
/** funcção de inicialização do programa **/
int main() {

    int numeros, soma = 0;
    int numerosinseridos = 0;
    float media = 0;
    string somaTxt = "";

    do{
        cout << "qual o numero que pretende somar se digitar 0 todos os numeros anteriores vao somar-se" << endl;
        cin >> numeros;
        if(numeros != 0) {
            if (somaTxt != "") somaTxt += " + ";

            somaTxt += to_string(numeros);
            soma += numeros;
            numerosinseridos++;
        }

    }
    while (numeros != 0);

    cout << "Inseriu " << numerosinseridos << " numeros" << endl;

    cout << "\nResultado de (" << somaTxt << ") = " << soma << endl;

    cout << "\nMedia de (" << somaTxt << ")/" << numerosinseridos;

    media = ((float)soma / (float)numerosinseridos);
    cout << " = " << media;
    cout << endl;


    return 0;

}

