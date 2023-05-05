#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int vetor[n];
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    int triangulo[n][n];
    for (int i = 0; i < n; i++) {
        triangulo[n-1][i] = vetor[i];
    }

    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            triangulo[i][j] = triangulo[i+1][j] + triangulo[i+1][j+1];
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "[";
        for (int j = 0; j <= i; j++) {
            cout << triangulo[i][j];
            if (j < i) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }

    return 0;
}
