#include <iostream>

using namespace std;

bool primo(int n){
    int count {0};
    for(int i=2; i <= n; i++){
        if(n%i==0){
            count++;
        }
    }

    if(count == 1){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i = n; i <= m; i++){
        if(primo(i)){
            cout << i << endl;
        }
    }
}