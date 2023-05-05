#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno {
   float nota[3];
   float media;
};

void calculaMedia(Aluno *aluno){
    float aux = 0;
    for(int i = 0; i < 3; i++){
        aux += aluno->nota[i];
    }
    aluno->media = aux/3.0;
}

void calculaMediaTurma(Aluno turma[], int n){
    float aux = 0;
    for(int i = 0; i < n; i++){
        Aluno *a = &turma[i];
        calculaMedia(a);
        Aluno *a = nullptr;
    }
}

int main(){
   int n, i, j;
   
   cin >> n;
   Aluno turma[n];
   
   for (j = 0; j < n; j++){
        for (i = 0; i < 3; i++){
            cin >> turma[j].nota[i];
        } 
   }

   calculaMediaTurma(turma, n);
   
   for (j = 0; j < n; j++) {
      cout << fixed;
      cout << setprecision(1) << turma[j].media << " ";
   }
   
   return 0;
}