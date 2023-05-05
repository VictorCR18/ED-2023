#include <iostream>

using namespace std;

int main(){
    int nl, nc;

    cin >> nl >> nc;

    int mat[nl][nc];

    for(int i = 0; i < nl; i++){
        for(int j = 0; j < nc; j++){
            cin >> mat[i][j];
        }
    }

    int count {0};

    for(int i = 0; i < nl - 1; i++){
        for(int j = 0; j < nc; j++){
            if(mat[i][j] > mat[i + 1][j]){
                count++;
            }
        }
    }

    cout << count;
}