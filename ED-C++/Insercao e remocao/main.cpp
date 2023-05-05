#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct aluno {
   int matricula;
   char nome[50];
   float media;
};

aluno le_aluno(){
    aluno a;
    cin >> a.matricula;
    cin.ignore();
    cin.get(a.nome, 50);
    cin >> a.media;
    return a;
}

aluno* insere_aluno(aluno *v, int *n, aluno novo){
    aluno *aux = new aluno[*n + 1];

    if(aux == nullptr){
        cout << "Erro: memoria insuficiente" << endl;
        return 0;
    }
    
    for(int i = 0; i < *n; i++){
        aux[i] = v[i];
    }

    aux[*n] = novo;
    (*n)++;

    delete[] v;
    return aux;
}

aluno* remove_aluno(aluno *v, int *n, int matricula){
    int pos = -1;
    
    for(int i = 0; i < *n; i++){
        if(v[i].matricula == matricula){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        return v;
    }

    v[pos] = v[*n - 1];
    aluno *aux = new aluno[*n - 1];

    if(aux == nullptr){
        cout << "Erro: memoria insuficiente" << endl;
        return 0;
    }

    for(int i = 0; i < *n - 1; i++){
        aux[i] = v[i];
    }

    (*n)--;

    delete[] v;

    return aux;
}

int main(){
   int num_oper = 0, i, n = 0;
   cin >> num_oper;
   aluno *v = 0;

   for (i = 0; i < num_oper; i++) {
      cin.ignore();
      char oper;
      cin >> oper;
      if (oper == 'i') {
         aluno a = le_aluno();
         v = insere_aluno(v, &n, a);
      } else {
         int mat;
         cin >> mat;
         v = remove_aluno(v, &n, mat);
      }
   }

   for (i = 0; i < n; i++) {
      cout << v[i].matricula << "\n" << v[i].nome << "\n" << std::fixed << setprecision(1) << v[i].media << "\n";
   }
   
   delete[] v;
   
   return 0;
} 