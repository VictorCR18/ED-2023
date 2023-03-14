#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

double fatorial(int n){
    double ret;
    if (n <= 1){
        return 1;
    }else{
        ret = n * fatorial(n - 1);
        return ret;
    }
}

double euler(int n){
    double e = 1; 
    for(int i = 1; n >= i; i++){
        e += 1/fatorial(i);
    }
    return e;
}

int main(){
    int n;
    cin >> n;
    cout << fixed << setprecision(6) << euler(n);

    return 0;
}
