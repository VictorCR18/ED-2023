#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno{
    int matricula;
    char nomeC[100];
    double media;
};

void prencherVetor(Aluno alunos[], int n){
    for(int i = 0; i < n; i++){
        cin >> alunos[i].matricula;
        cin.ignore();
        cin.get(alunos[i].nomeC, 100);
        cin >> alunos[i].media;
        cin.ignore();
    }
}

int main(){
    int n;
    cin >> n;
    Aluno alunos[n];

    prencherVetor(alunos, n);

    int m;
    cin >> m;
    for(Aluno a : alunos){
        if(m == a.matricula){
            cout << a.nomeC << endl << fixed << setprecision(1) << a.media;
            return 0;
        }
    }

    cout << "NAO ENCONTRADA";

}