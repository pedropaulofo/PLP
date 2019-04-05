#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {
  string entrada, saida, nome;
  stringstream ss;

  while (true){
    getline(cin, entrada);
    if (entrada == "wally") break;

    saida = "?";
    stringstream ss(entrada);
    while(ss >> nome){
      if(nome.length() == 5) saida = nome;
    }
    cout << saida << endl;
  }
  

return 0;
}
