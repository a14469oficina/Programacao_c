#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

int npilhas = 3 , nelementos = 10;
string pilhas [3][10]{
{ "", "","","","","","","","",""},
{ "", "","","","","","","","",""},
{ "", "","","","","","","","",""}
};

void mostrarpilha(){

    cout << "\n A minha pilha" << endl << endl;

    for (int y =nelementos - 1; y>=0; y--){
        for (int x = 0; x<npilhas; x++){
            if(x>0) cout << "|";
            //cout << "array [" << x << "][" << y << "]";
            if (pilhas[x][y] != ""){
            cout << pilhas [x][y];
        }else{
            cout << " ";
        }

        }
        cout << endl;
    }
    cout << "---------" << endl;
    for (int x = 0; x<npilhas; x++){
        if(x>0) cout << "|";
        cout << x;
    }
cout << endl << endl;
}

void pedirelemento(){

    int qualpilha;
    string elemento;
    bool encontroulivre = false;

    cout << "Em que pilha pretende colocar o elemento( 0 / 1 / 2 )";
    cin >> qualpilha;
    cout << "\n Qual o elemento a colocar na pilha [" << qualpilha << "] : ";
    cin >> elemento;

    for (int i = 0; i<nelementos; i++){
        if (pilhas[qualpilha][i] == ""){
            pilhas[qualpilha][i] = elemento;
            mostrarpilha();
            encontroulivre = true;
            break;
        }
    }
    if (!encontroulivre){
        cout << "\n A pilha [" << qualpilha << "] na tem posicoes livres";
    }
}





int main() {
    int op = 0;
    string valor = "";

    do{
        cout << "\n 3 Pilas Array 2 Dimensoes" << endl << endl;
        cout << "\n O que pretende fazer ? \n";
        cout << "\n 1 - inserir o elemento em pilha \n";
        cout << "\n 2 - mostrar pilha \n";
        cout << "\n 0 - sair \n";

        cin >> op;

        switch(op){
            case 1:
                pedirelemento();
                break;
            case 2:
                mostrarpilha();
                break;
            default: break;

        }
    }while (op !=0);


    return 0;

}

