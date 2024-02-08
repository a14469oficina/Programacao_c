 #include <iostream>

using namespace std;
/** funcção de inicialização do programa **/
int main() {

        char operacao;
        double numero1,numero2;
        cout << "escolha a operacao que pretende fazer";
        cout << "\n* multiplicacao \n/ dividir \n- subtrair \n+ somar \n";
        cin >> operacao;
        cout << "escolha o 1 numero \n";
        cin >> numero1;
        cout << "escolha o 2 numero \n";
        cin >> numero2;

        if (operacao == '+' ){
            cout << (numero1 + numero2 );
        }
        else if (operacao == '-'){
            cout << (numero1 - numero2 );
        }
        else if (operacao == '*'){
            cout << (numero1 * numero2 );
        }
        else if (operacao == '/'){
            cout << (numero1 / numero2 );
        }
    return 0;

}
