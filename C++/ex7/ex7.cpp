#include <iostream>

using namespace std;
/** funcção de inicialização do programa **/
int main() {
int i = 1;
while (i < 3){
    cout << "Instruao: " << i << "\n";
    i++;

}
    string nome = "Filipe";
    i = 0;
    while (i < 6){
        cout << nome[i] << endl;
        i = i + 1;

    }
    int base , expoente;
        cout << "\n \t Digite o numero base: " << endl;
        cin >> base;

        cout << "\n \t Digite o expoente: " << endl;
        cin >> expoente;

        int resultado = 1;
        i = 1;
        while (i <= expoente){
            resultado *= base;
            i++;
        }
        cout << resultado << endl;

        i = 1; // exemplo ranhosoooo w3schools para o hilario !!!
        resultado = 1;
        if (expoente > 0){
            do {
                resultado *= base;
                i++;
            }
            while (i <= expoente);
        }
        cout << resultado;
    return 0;
}

