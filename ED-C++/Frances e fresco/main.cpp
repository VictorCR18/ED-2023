
#include <iostream>
#include <string>

using namespace std;

int main(){
	getline(cin, str);

    string aux;
	int count = 0;
	for (int i = 0; i < str.size(); i++){
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
		    count++;
		    if(str[i + 1] == 32 && str[i] == str[i + 2]){
		        i += 2;
		        aux += str[i];
		    }else{
		        aux += str[i];
		    }
		}else{
		  aux += str[i];
		}
	}
	cout << aux;
}