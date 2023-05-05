#include <iostream>
#include <string>

using namespace std;

int contaCaracteres(string str, int n, char c){
    int count {0};

    if(n > 0){
        if(str[n] == c){
            count++;
        }
        count += contaCaracteres(str, n - 1, c);
    }
    return count;
}

int main() {
    string str;
    getline(cin, str);

    char c;
    cin >> c;

    int n = str.size();

    cout << contaCaracteres(str, n, c);
}