#include <iostream>

using namespace std;

int somaTriangulos(int n){
    int resultado;
    if(n == 1){
         return 1;
    }else{
       return resultado = n + 2 * somaTriangulos(n - 1) - somaTriangulos(n - 2);
    }
}

int main(){
    int n;
    cin >> n;

    somaTriangulos(n);

}