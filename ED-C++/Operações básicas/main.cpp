#include <iostream>
#include <vector>

using namespace std;

void imprimirVetor(vector<int>& vet, int n, int i){
    if(i < n){
        if(i == 0){
            cout << "vet : [ ";
        }
        cout << vet[i] << " ";
        if(i + 1 == n){
            cout << "]" << endl;
        }
        imprimirVetor(vet, n, i + 1);
    }
}

void imprimirVetorReverso(vector<int>& vet, int n, int j){
    if(0 < j){
        if(n == j ){
            cout << "rvet: [ ";
        }
        cout << vet[j - 1] << " ";
        if(j == 1){
            cout << "]" << endl;
        }
        imprimirVetorReverso(vet, n, j - 1);
    }
}

int imprimirVetorSoma(vector<int>& vet, int n, int i){
    if(i == n){
        return 0;
    }else if(i < n){
        return vet[i] + imprimirVetorSoma(vet, n, i + 1);
    }
}

int imprimirVetorMult(vector<int>& vet, int n, int i){
    if(i == n){
        return 1;
    }else if(i < n){
        return vet[i] * imprimirVetorMult(vet, n, i + 1);
    }
}

int imprimirVetorMin(vector<int>& vet, int n, int i, int menor){
    if(i == n){
        return menor;
    }else if(vet[i] < menor){
        menor = vet[i];
    }        
    return imprimirVetorMin(vet, n, i + 1, menor);
}

void inverterVetor(vector<int>& vet, int n, int i) {
    if (i >= n / 2) {
        return;
    }
    int temp = vet[i]; 
    vet[i] = vet[n - i - 1];  
    vet[n - i - 1] = temp; 
    inverterVetor(vet, n, i + 1);  
}

int main(){
    vector<int> vet;
    int n, i = 0;
    while(cin >> n){
        vet.push_back(n);
    }
    
    int j = vet.size();
    n = j;
   
    imprimirVetor(vet, n, i);
    imprimirVetorReverso(vet, n, j);
    cout << "sum : " << imprimirVetorSoma(vet, n, i) << endl;
    cout << "mult: " << imprimirVetorMult(vet, n, i) << endl;
    int menor = imprimirVetorMin(vet, n, 0, vet[0]);
    cout << "min : "<< menor << endl;
    inverterVetor(vet, n, i);
    cout << "inv : [ ";
    for (int i = 0; i < n; i++) {
        cout << vet[i] << " ";
    }
    cout << "]" << endl;
}