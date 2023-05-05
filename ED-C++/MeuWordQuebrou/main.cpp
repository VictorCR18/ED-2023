#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    char key;
    getline(cin, str);
    cin >> key;

    switch (key){
        case 'M': 
            for(int i = 0; i < str.size(); i++){
                if(str[i] >= 97 && str[i] <= 122){
                    str[i] -= 32;
                }
            }
            cout << str << endl;
            break;
        case 'm':
            for(int i = 0; i < str.size(); i++){
                if(str[i] >= 65 && str[i] < 97){
                    str[i] += 32;
                }
            }
            cout << str << endl;
            break;
        case 'p':
            for(int i = 0; i < str.size(); i++){
                if(str[i + 1] == 32 || str[i + 1] == 32){
                    if(str[i] >= 65 && str[i] < 97)
                        str[i] += 32;
                }
                    
                if(str[i - 1] == 32 && str[i] != 'a' && str[i] != 'e' && str[i] != 'o'){
                    if(str[i] >= 97 && str[i] <= 122)
                    str[i] -= 32;
                }
            }
            cout << str << endl;
            break;
        case 'i':
            for(int i = 0; i < str.size(); i++){
                if(str[i] >= 97 && str[i] <= 122){
                    str[i] -= 32;
                } else if(str[i] >= 65 && str[i] < 97){
                    str[i] += 32;
                }
            }
            cout << str << endl;
            break;
        default:
            break;
    }
}