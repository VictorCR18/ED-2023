#include <iostream>
using namespace std;

int main(){
    int mat[3][3];
    int sL = 0;
    int sC = 0;
    int sDP = 0;
    int sDS = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> mat[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++){
        sL = 0;
        for (int j = 0; j < 3; j++){
            sL += mat[i][j];
        }

        if (i == 0){
            sC = sL;
        }else{
            if (sC != sL){
                cout << "nao";
                return 0;
            }
        }
    }
    
    for (int j = 0; j < 3; j++){
        sC = 0;
        for (int i = 0; i < 3; i++){
            sC += mat[i][j];
        }if (sC != sL){
            cout << "nao";
            return 0;
        }
    }
    
    for (int i = 0; i < 3; i++){
        sDP += mat[i][i];
    }
    
    if (sDP != sL){
        cout << "nao";
        return 0;
    }
    
    for (int i = 0, j = 2; i < 3; i++, j--){
        sDS += mat[i][j];
    }

    if (sDS != sL){
        cout << "nao";
        return 0;
    }
    
    cout << "sim";
    
    return 0;
}