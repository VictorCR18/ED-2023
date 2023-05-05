#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string str, result;
  string word;
  getline(cin, str);
  stringstream ss;
  int test = 0, count = 0;

  ss << str;
  
    for(int i = 0; i < str.size(); i++){
        if(str[i] == 32){
            count++;
        }
    }

    for(int i = 0; i < count + 1; i++) {
        ss >> word;
        for(int j = 0; j < word.size(); j++){
            if(word[j] == 46){
                test++;
            } if(word[j] >= 58 && word[j] <= 126) {
                test += 2;
                break;
            }
        }
        
        if(test == 0){
            result += "int ";
        }else if(test == 1){
            result += "float ";
        }else if(test >= 2){
            result += "str ";
        }
        
        test = 0;
    } 
    
    result.pop_back();
    cout << result;
}