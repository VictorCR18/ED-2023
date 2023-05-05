#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
  string str;
  string p1, aux ="";
  int count = 0;
  getline(cin, str);
  stringstream ss;
  bool teste = true;

  ss << str;

  // for(int i = 0; i < str.size() - 1; i++) {
  //   if(str[i] == 32) {
  //     count++;
  //   }
  // }

  for(int i = 0; i < (str.size() - 1)/2; i++) {
    ss >> p1;
      // cout << p1 << " " << aux << endl;
    if(p1 < aux) {
      teste = false;
      break;
    }
    aux = p1;
  }

  if (teste){
    cout << "sim" << endl;
  }else{
    cout << "nao" << endl;
  }
}