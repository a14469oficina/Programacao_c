#include <iostream>

using namespace std;
/** func��o de inicializa��o do programa **/
int main() {

    char letra1 , letra2;

    cout << "Vai selecionar dois caminhos : \n";
    cout << "U - Up \nD - Down \nL - Left \nR - Right";
    cout << "\n  1. caminho?";
    cin >> letra1;
    cout << "\n  2. caminho?";
    cin >> letra2;


    //cout << "R: " << letra1 << letra2;

    if  (((letra1 == 'U') && (letra2 == 'U'))
        || ((letra1 == 'R') && (letra2 == 'D'))){
        cout << ":-|";

    } else  if  (((letra1 == 'U') && (letra2 == 'R'))
        || ((letra1 == 'R') && (letra2 == 'R'))){
        cout << ")-:";

    } else  if  (((letra1 == 'U') && (letra2 == 'L'))
        || ((letra1 == 'U') && (letra2 == 'D'))
        || ((letra1 == 'D') && (letra2 == 'R'))
        || ((letra1 == 'D') && (letra2 == 'L'))
        || ((letra1 == 'L') && (letra2 == 'L'))
        || ((letra1 == 'R') && (letra2 == 'L'))){
        cout << "/-:";

    } else  if  (((letra1 == 'D') && (letra2 == 'U'))
        || ((letra1 == 'D') && (letra2 == 'D'))
        || ((letra1 == 'L') && (letra2 == 'U'))
        || ((letra1 == 'L') && (letra2 == 'R'))
        || ((letra1 == 'L') && (letra2 == 'D'))
        || ((letra1 == 'R') && (letra2 == 'U'))){
        cout << ":-) tou contente";

    } else {
        //dar indica��o ao utilizador que ele escreveu alguma coisa mal
        cout << "caminho n�o encontrado";
    }

    return 0;

}

