#include <iostream>

using namespace std;

void preencheArray(int *A, int n){
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
}

void imprimeArray(int *A, int n){
    for(int i = 0; i < n; i++){
        cout << A[i] << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int *ptr = new int[n];

    cout << ">>>>>>>>" << endl;
    preencheArray(ptr, n);
    imprimeArray(ptr, n);
    delete[] ptr;

    ptr = nullptr;
}

