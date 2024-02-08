#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;

int main(){

    string varx = "Filipe";
    string* vary = &varx;

    cout << "varx = " << varx << endl;
    cout << "Varx na posicao de memoria : " << varx << endl;

    cout << "Vary (referencia memoria) : " << vary << endl;
    cout << "Vary (esta a apontar para Varx) = " << *vary << endl;

    *vary = "Soblirov";

    cout << "varx = " << varx << endl;
    cout << "Varx na posicao de memoria : " << varx << endl;

    cout << "Vary (referencia memoria) : " << vary << endl;
    cout << "Vary (esta a apontar para Varx) = " << *vary << endl;

return 0;

}
