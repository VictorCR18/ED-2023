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

void maiorNota(Aluno aluno1, Aluno aluno2){
    if(aluno1.nota > aluno2.nota){
        cout << aluno1.nome << " , " << fixed << setprecision(1) << aluno1.nota;
    }else if (aluno1.nota < aluno2.nota){
        cout << aluno2.nome << " , " << fixed << setprecision(1) << aluno2.nota;
    }else{
        cout << aluno1.nome << " e " << aluno2.nome << " , " << fixed << setprecision(1) << aluno1.nota;
    }
}

int main(){
    Aluno aluno1, aluno2;

    cin >> aluno1.nome;
    cin >> aluno1.matricula;
    cin.ignore();
    cin >> aluno1.disciplina;
    cin >> aluno1.nota;
    cin.ignore();
    
    cin >> aluno2.nome;
    cin >> aluno2.matricula;
    cin.ignore();
    cin >> aluno2.disciplina;
    cin >> aluno2.nota;
    cin.ignore();

    maiorNota(aluno1, aluno2);
}