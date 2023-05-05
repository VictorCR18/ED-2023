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

int main(){
    Aluno aluno;
    int i;
    for (i = 0; i < 3; i++){
        cin >> aluno.nota[i];
    }

    Aluno *a = &aluno;

    calculaMedia(a);
        
    cout << fixed;
    cout << setprecision(1) << aluno.media;
   
   return 0;
}