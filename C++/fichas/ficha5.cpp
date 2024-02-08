#include <iostream>

using namespace std;

int binarioParaDecimal(int IntputBinario) {
    int resultadoDecimal = 0;
    int base = 1;

    while (IntputBinario > 0) {
        int ultimoDigito = IntputBinario % 10;
        IntputBinario /= 10;
        resultadoDecimal += ultimoDigito * base;
        base *= 2;
    }

    return resultadoDecimal;
}

int decimalParaBinario(int IntputDecimal) {
    int resultadoBinario = 0;
    int base = 1;
    int resto;
    int OutputBinario = 0;

    while (IntputDecimal > 0) {
        resto = IntputDecimal % 2;
        IntputDecimal /= 2;
        resultadoBinario += resto * base;
        base *= 10;
    }


    return (resultadoBinario);
}

int main() {
    // Conversao de Binario para Decimal
    int IntputBinario;
    cout << "Digite um numero binario: ";
    cin >> IntputBinario;

    int resultadoDecimal = binarioParaDecimal(IntputBinario);

    cout << "O numero decimal e: " << resultadoDecimal << endl;

    // Conversao de Decimal para Binario
    int IntputDecimal;
    cout << "Digite um numero decimal: ";
    cin >> IntputDecimal;

    int resultadoBinario = decimalParaBinario(IntputDecimal);

    cout << "O numero binario e: " << resultadoBinario << endl;

    return 0;
}
