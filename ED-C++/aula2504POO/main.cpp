#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

void printPessoa(Pessoa &p){
    cout << p.getAltura() << " "
         << p.getNome() << " "
         << p.getIdade() << endl;
}

int main(){
    Pessoa pessoa(19, 1.63, "Victor");

    printPessoa(pessoa);   
}