#include <iostream>
#include <string>

using namespace std;
/** funcção de inicialização do programa **/
int main() {
    string arrayletras [3][10] = {
    {"A", "B", "C", "D", "B", "C", "B", "C", "B", "C"},
    { "E", "F", "G", "H", "B", "C" , "B", "C", "B", "C"},
    { "E", "F", "G", "H", "B", "C" , "B", "C", "B", "C"}
    };

    for (int x = 0; x < 2 ; x++){
        for (int i = 0 ; i < 10; i++){
            cout << "array[" << x << "][" << i << "] = ";
            cout << arrayletras [x][i] << endl;
        }
    }


    return 0;
}

