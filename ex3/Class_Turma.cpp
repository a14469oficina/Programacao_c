#include <iostream>
#include <string>

using namespace std;

class Turma{

    public:
        string nome;

    private:
        float notaMedia;
        string listaAlunos [26][2]; // 0-Numeros 1-Nome
        string listaModulos [50];

    public:
        void colocaNotaMedia(float notaX){
        this ->notaMedia = notaX;
        }

        string listagemNumAlunos(){
            string aux = "";
            for (int i = 0; i < 26; i++){
                aux += this ->listaAlunos[i][0];
                aux += "\n";
            }
            return aux;
        }

    private:
        int numeroAlunos(){
            int contador = 0;
            for (int x = 0; x < 26; x++){
                if (this ->listaAlunos[x][0] != ""){
                    contador++;
                }
            }
            return contador;
        }

    public:
        void imprimeNumeroAlunos(){
            cout << listagemNumAlunos();
        }
        bool inserirAluno(string numeroAluno,string nomeAluno){
            for (int x = 0; x < 26; x++){
                if (this ->listaAlunos[x][0] == ""){
                    this ->listaAlunos[x][0] = numeroAluno;
                    this ->listaAlunos[x][0] = nomeAluno;
                    return true;
                }
            }
        return false;
        }
};

int main (){

    Turma turma1P;

    turma1P.nome = "Turma 1P 2023/2024";
    //turma1P.notaMedia = 0.0;
    turma1P.colocaNotaMedia (0.0);
    //turma1P.listaAlunos[0][0]= "14466"
    //turma1P.listaAlunos
    turma1P.inserirAluno("14466", "Leonardo Fernandes");

    cout << "numero de alunos ";
    turma1P.imprimeNumeroAlunos();


    return 0;
}
