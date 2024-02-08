#include <iostream>
#include <string>

using namespace std;
/** funcção de inicialização do programa **/
int main() {
    int soma = 0;
    int nidades = 21;
    int idades [nidades];
    int idadenumero = 0;
    float media =0;


        cout << "qual o numero de idades se digitar 0  faz a media das idades" << endl;
        cin >> nidades;
        for(int j = 0; j < nidades; j++){
            cout << "qual a idade" << (j + 1) << ": ";
            cin >> idadenumero;
            if (idadenumero > 0){
                idades[j] = idadenumero;
                soma += idadenumero;

            }else {
                j--;
            }

        }

        media = float (soma) / (nidades);
        cout << " = " << media;
        cout << endl;

    return 0;

}
