#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int v, j1, j2;

    cin >> v >> j1 >> j2;

    if(abs(v - j1) > abs(v - j2)){
        cout << "primeiro";
    }else if((abs(v - j1) < abs(v - j2))){
        cout << "segundo";
    }else{
        cout << "empate";
    }
}