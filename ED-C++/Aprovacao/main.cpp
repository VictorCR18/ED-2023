#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    string disciplina;
    double nota;
};

void aprovacao(Aluno aluno){
    if(aluno.nota >= 7){
        cout << aluno.nome << " aprovado(a) em " << aluno.disciplina;
    }else if (aluno.nota < 7){
        cout << aluno.nome << " , reprovado(a) em " << aluno.disciplina;
    }
}

int main(){
    Aluno aluno;

    cin >> aluno.nome;
    cin >> aluno.matricula;
    cin.ignore();
    cin >> aluno.disciplina;
    cin >> aluno.nota;
    cin.ignore();

    aprovacao(aluno);
}