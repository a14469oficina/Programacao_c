#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;

struct FAluno{
        int numeroAluno;
        string nomeAluno;
        int anosAluno;
    };

 struct FNota{
    string disciplina;
    string modulo;
    int notaModulo;

 };


int main(){
    FAluno fichaAluno;
    fichaAluno.numeroAluno = 24;
    fichaAluno.nomeAluno = "Filipe Soblirov";
    fichaAluno.anosAluno = 15;

    cout << "Aluno : " << fichaAluno.nomeAluno;
    cout << ", tem o numero : " << fichaAluno.numeroAluno;
    cout << " e tem  " << fichaAluno.anosAluno << " anos." << endl;

    FAluno fichaAluno2;
    fichaAluno2.numeroAluno = 23;
    fichaAluno2.nomeAluno = "Lucas Soares";
    fichaAluno2.anosAluno = 15;

    cout << "Aluno : " << fichaAluno2.nomeAluno;
    cout << ", tem o numero : " << fichaAluno2.numeroAluno;
    cout << " e tem  " << fichaAluno2.anosAluno << " anos." << endl;

    FNota notaAluno1Disciplina1;
    notaAluno1Disciplina1.disciplina = "programacao";
    notaAluno1Disciplina1.modulo = "C++ iniciacao";
    notaAluno1Disciplina1.notaModulo = 0;

return 0;

}

