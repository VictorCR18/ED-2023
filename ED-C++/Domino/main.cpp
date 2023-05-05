#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int v[n];

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    int b = 0;

    for (int i = 0; i < n - 1; i++){
        if(v[i] > v[i + 1]){
            b++;
            brea#include <iostream>

using namespace std;

int main(){
    int m[3][3];
    int sl, sc, sdp, sds;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>m[i][j];
        }
    }

    sl = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sl += m[i][j];
        }
        if(i>0 && sl != sl) {
            cout<<"nao";
            return 0;
        }
    }

    sc = 0;
    for(int j=0; j<3; j++){
        for(int i=0; i<3; i++){
            sc += m[i][j];
        }
        if(j>0 && sc != sl) {
            cout<<"nao";
            return 0;
        }
    }

    sdp = 0;
    for(int i=0; i<3; i++){
        sdp += m[i][i];
    }

    sds = 0;
    for(int i=0; i<3; i++){
        sdp += m[i][2-i];
    }

    if(sl == sc && sc == sdp && sdp == sds){
        cout<<"sim";
    }else{
        cout<<"nao";
    }
}k;
        }
    }

    if(b == 0){
        cout << "ok";
    }else{
        cout << "precisa de ajuste";
    }
}